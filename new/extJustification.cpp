// problem link: https://leetcode.com/problems/text-justification/description/
class Solution {
public:

    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> s;
        int n = words.size();

        int i=0;
        while(i<n){
            int latterCount = 0;
            int lineLength = 0;
            int j = i;

            while(j<n && lineLength + words[j].length() + (j - i)<= maxWidth){
                lineLength +=words[j].length();
                latterCount +=words[j].length();
                j++;
            }

            int emptySpaceLine = maxWidth - latterCount;
            int spaceContain = j - i - 1;

            string line = "";
            if(j == n || spaceContain==0){
                // last line
                for(int k=i; k<j; k++){
                    line +=words[k];

                    if(k != j-1) line +=" ";

                }

                while(line.size()<maxWidth) line +=" ";

            }
            else{
                int eachSpace = emptySpaceLine / spaceContain;
                int extra = emptySpaceLine % spaceContain;

                for(int k=i; k<j; k++){
                    line +=words[k];

                    if(k !=j-1){
                        int addSpace = eachSpace + (extra > 0 ? 1: 0);
                        line +=string(addSpace,' ');
                        if(extra > 0) extra--;
                    }
                }
            }

            s.push_back(line);

            i = j;

        }
        return s;
    }
};