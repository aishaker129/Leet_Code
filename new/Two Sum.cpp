#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=0;
        for(int i=0; i<nums.size(); i++){
             bool f = false;
            for(int j=i+1; j<nums.size(); j++){
               
                int s = nums[i]+nums[j];
                if(s==target){
                    l=i;
                    r = j;
                    break;
                }
            }
            if(f) break;
        }
        vector<int> v;
        v.push_back(l);
        v.push_back(r);
        return v;
    }
};