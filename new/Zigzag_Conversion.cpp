// Problem Link: https://leetcode.com/problems/zigzag-conversion/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size()){
            return s;
        }

        int idx = 0, d = 1;

        vector<vector<char>> rows(numRows);

        for(char c:s){
            rows[idx].push_back(c);
            if(idx == 0){
                d = 1;
            }
            else if(idx == numRows - 1){
                d = -1;
            }

            idx +=d;
        }

        string ans;
        for(auto& r:rows){
            for(char c:r){
                ans +=c;
            }
        }

        return ans;
    }
};
