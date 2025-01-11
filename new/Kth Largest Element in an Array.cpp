class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int, vector<int>, greater<int> > a;

         for(auto u:nums){
            if(a.size()<k){
                a.push(u);
            }
            else{
                if(a.top()<u){
                    a.pop();
                    a.push(u);
                }
            }
         }

        return a.top();
    }
};