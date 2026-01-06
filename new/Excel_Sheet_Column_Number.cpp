// Problem Link: https://leetcode.com/problems/excel-sheet-column-number/description/?envType=problem-list-v2&envId=string

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        long long sum = 0;

        for(int i=0; i<n; i++){
            int digit = columnTitle[i]-'A'+1;
            int num = n-1-i;
            sum += digit * pow(26 , num);

        }
        return sum;
    }
};
