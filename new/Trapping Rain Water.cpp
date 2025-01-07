class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left,right;
        int lmx=0;
        int rmx = 0;
        int sum = 0;
        for(auto u:height){
            lmx = max(u,lmx);
            left.push_back(lmx);
        }
        int n = height.size();
        for(int i=n-1; i>=0; i--){
            rmx = max(height[i],rmx);
            right.push_back(rmx);
        }
        reverse(right.begin(), right.end());

        for(int i=0; i<height.size(); i++){
            int m = min(left[i],right[i]);
            sum +=(m-height[i]);
        }

        return sum;
    }
};