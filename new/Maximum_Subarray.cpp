class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int mx = nums[0];
        for(int i=1; i<n; i++){
            if(sum + nums[i]>nums[i]){
                sum +=nums[i];
               
            }
            else{
                sum = nums[i];
            }
             mx = max(mx,sum);
        }

        return mx;
    }
};