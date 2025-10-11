// problem link: https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;

        for(auto u : nums1){
            if(u != 0){
                result.push_back(u);
            }
        }
        for(auto u : nums2){
            if(u != 0){
                result.push_back(u);
            }
        }

        while(result.size() < n+m){
            result.push_back(0);
        }

        sort(result.begin(),result.end());
        nums1 = result;
    }
};