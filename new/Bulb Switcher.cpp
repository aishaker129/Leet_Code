class Solution {
public:
    int bulbSwitch(int n) {
        if(n==0) return 0;
        else if(n==1) return 1;
        else{
            int cnt = 0;
            for(int i=1; i<=n; i++){
                int p = i*i;
                if(p>n){
                    break;
                }
                else cnt++;
            }
            return cnt;
        }

    }
};