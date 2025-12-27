// Problem Link: https://leetcode.com/problems/add-binary/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0;
        int i = a.length()-1;
        int j = b.length()-1;
        string result = "";

        while(i>=0 || j>=0 || c>0){
            if(i>=0) c +=a[i--] -'0';
            if(j>=0) c+=b[j--] - '0';

            result += c % 2 + '0';
            c /=2;
        }

        reverse(result.begin(),result.end());
        return result;
    }
};
