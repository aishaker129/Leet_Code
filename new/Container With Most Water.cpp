class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx = 0;
        int l = 0, r = height.size()-1;
        while(l<r){
            mx = max(mx,(r-l)*min(height[l],height[r]));
            if(height[l]<height[r]) l++;
            else r--;
        }
       return mx;
    }
};