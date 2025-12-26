// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[n-1]){
                nums[n] = nums[i];
                n++; 
            }
        }

        return n;
    }
};
