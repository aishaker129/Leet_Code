// Problem link: https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        
        int result = 0;
        map<char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

        int n = s.size();
        for(int i=0; i<n-1; i++){
            char cr = s[i];
            char cn = s[i+1];
            if(mp[cr] < mp[cn]){
                result -= mp[cr];
            }
            else{
                result += mp[cr];
            }
        }

        result += mp[s[n-1]];
        return result;
    }
};
