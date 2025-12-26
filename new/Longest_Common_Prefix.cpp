// Problem Link: https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0];
        int n = prefix.length();

        for(int i=1; i<strs.size(); i++){
            string s = strs[i];

            while(n > s.length() || prefix != s.substr(0,n)){
                n--;
                if(n == 0){
                    return "";
                }
                prefix = prefix.substr(0,n);
            }
        }

        return prefix;
    }
};
