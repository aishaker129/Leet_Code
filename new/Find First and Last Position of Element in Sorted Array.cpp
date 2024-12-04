class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> v;
        int l = 0,r =nums.size()-1;
        int first = -1,last = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
                first = mid;
                r = mid-1;
            }
            else if(nums[mid]<target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        v.push_back(first);
        l = 0,r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target){
                last = mid;
                l = mid+1;
            }
            else if(nums[mid]<target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        v.push_back(last);
        return v;
    }
};