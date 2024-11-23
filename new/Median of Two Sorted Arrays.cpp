class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> marge;
        for(auto u:nums1){
            marge.push_back(u);
        }
        for(auto u:nums2){
            marge.push_back(u);
        }
        sort(marge.begin(),marge.end());

        int n = marge.size();
        int value = n/2;
        double ans = 0;
        if(n%2==0){
            ans = ((double)marge[value-1]+marge[value])/2;
            
        }
        else{
            ans = marge[value];
        }

        return ans;
    }
};