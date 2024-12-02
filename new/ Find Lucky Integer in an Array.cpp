class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> m;
        int mx = -1;
        for(auto u:arr){
            m[u]++;
        }

        for(auto u:m){
            if(u.first==u.second){
                mx = max(mx,u.second);
            }
        }

        return mx;
    }
};