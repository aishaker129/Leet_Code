class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx = 0;
        int sum = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]<nums[i]){
                sum +=nums[i];
                mx = max(mx,sum);
            }
            else{
                mx = max(mx,sum);
                sum = nums[i];
                
            }
        }
        mx = max(mx,sum);

        return mx;
    }
};