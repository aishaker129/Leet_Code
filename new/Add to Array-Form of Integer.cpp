class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        int carry = 0;
        vector<int> v;
        while(n>=0 || k>0){
            int m = 0;
            if(n>=0){
                m = num[n];
            }
            m = m + k%10 + carry;
            k /= 10;
            carry = m/10;
            int value = m%10;
            v.push_back(value);
            n--;
        }
        if(carry !=0){
            v.push_back(carry);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};