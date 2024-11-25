class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        int mx = 0;
        int idx = 0;
        for(int i=0; i<n; i++){
            if(nums[i]> mx){
                mx = nums[i];
                idx = i;
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i]==mx) continue;
            else{
                int num = nums[i] * 2;
                if(num>mx){
                    cnt = -1;
                    break;
                }
            }
        }
        if(cnt != -1){
            return idx;
        }
        else{
            return cnt;
        }
    }
};