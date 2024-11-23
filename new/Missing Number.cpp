class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int value = (n*(n+1))/2;
        int sum = 0;
        for(auto u:nums){
            sum +=u;
        }

        return abs(value - sum);

    }
};