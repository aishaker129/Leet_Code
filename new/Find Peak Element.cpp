class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        else if(nums[0]>nums[1]) return 0;
        else if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        else{
            int s = 1;
            int e = nums.size()-2;
            while(s<=e){
                int m = (s+e)/2;
                if(nums[m]>nums[m-1] and nums[m]>nums[m+1]) return m;
                else if(nums[m]<nums[m-1]){
                    e = m-1;
                }
                else{
                    s = m+1;
                }
            }
            return -1;
        }
    }
};