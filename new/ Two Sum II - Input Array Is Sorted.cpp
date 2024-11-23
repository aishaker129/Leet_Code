class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l=0,r=n-1;
        while(l<r){
            int val = numbers[l]+numbers[r];
            if(val==target) break;
            else if(val>target) r--;
            else l++;
        }

        vector<int> v;
        v.push_back(l+1);
        v.push_back(r+1);
        return v;
    }
};