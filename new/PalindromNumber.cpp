// problem link:https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        // string s = to_string(x);
        // int n = s.length();
        bool f = true;
        // int i=0;
        // int j= n-1;
        // while(i<n/2){
        //     if(s[i] != s[j]){
        //         f = false; 
        //         break;
        //     }
        //     i++;
        //     j--;
        // }

        if(x<0) return false;
        // vector<int> v;
        // while(x>0){
        //     int temp = x % 10;
        //     x /= 10;
        //     v.push_back(temp);
        // }

        // int n = v.size();
        // int j = n-1;
        // for(int i=0; i<n/2; i++){
        //     if(v[i] != v[j]){
        //         f = false;
        //         break;
        //     }
        //     j--;
        //     if(i>j) break;
        // }

        int value = x;
        long long ab =0;

        while(x>0){
            int temp = x % 10;
            ab = ab*10+temp;
            x /=10;
        }

        if(ab != value) f = false;

        return f;
    }
};