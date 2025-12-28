// Problem Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/?envType=daily-question&envId=2025-12-28

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int count =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 if(grid[i][j]<0)count++;
            }
        }
        return count;
    }
};
