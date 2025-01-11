class Solution {
public:
    double average(vector<int>& salary) {
        int total = 0;
        int n = salary.size();
        int cnt = 0;
        sort(salary.begin(),salary.end());
        for(int i=1; i<n-1; i++){
            total += salary[i];
            cnt++;
        }

        double res = (double)total /cnt;

        return res;
    }
};