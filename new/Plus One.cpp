class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int n = digits.size();
        if(digits[n-1] != 9){
            digits[n-1] +=1;
            return digits; 
        }
        else{
            int c = 1;
            for(int i=n-1; i>=0; i--){
                if(digits[i]==9 and c==1){
                    res.push_back(0);
                    c = 1;
                }
                else{
                    res.push_back(digits[i]+c);
                    c=0;
                }
            }
            if(c>0){
                res.push_back(c);
            }
            reverse(res.begin(),res.end());
            return res;
        }
        return digits;
    }
};