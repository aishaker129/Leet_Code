// Problem Link: https://leetcode.com/problems/length-of-last-word/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int lengthOfLastWord(string s) {
        int mx =0;

        for(int i=s.size()-1; i>=0; i--){
            if(s[i] !=' '){
                mx++;
            }
            else if(s[i]==' ' && mx==0){
                continue;
            }
            else{
                break;
            }
        }

        return mx;
    }
};
