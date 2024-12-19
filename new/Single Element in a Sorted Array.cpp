class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1) return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if(nums[n-1] != nums[n-2]) return nums[n-1];

        int s = 0, e = n-1;
        while(s<=e){
            int m = (s+e)/2;
            if(nums[m] !=nums[m-1] && nums[m] !=nums[m+1]) return nums[m];
            else if(m % 2 ==1){
                if(nums[m-1]==nums[m]){
                    s = m+1;
                }
                else{
                    e = m-1;
                }
            }
            else{
                if(nums[m+1]==nums[m]){
                    s = m+1;
                }
                else{
                    e = m-1;
                }

            }
        }
        return -1;
    }
};