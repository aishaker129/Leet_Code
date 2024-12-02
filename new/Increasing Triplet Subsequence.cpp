class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool f = false;
        int l = INT_MAX;
        int r = INT_MAX;
        int k = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int value = nums[i];
            if(l>=value){
                l = value;
            }
            else if(r>=value){
                r = value;
            }
            else{
                k = value;
                return true;
            }
        }
        return false;
    }
};