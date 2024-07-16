#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int subsetXORSum(vector<int>& nums){
    int n = nums.size();
    int result = 0;
    for(int i=0; i<(1<<n); i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(i & (1<<j)){
                cnt ^=nums[j];
            }
        }

        result +=cnt;
    }

    return result;
}

int main(){
    optimize();
    int n; cin>>n;
    vector<int>v;
    for(int i=1; i<=n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int ans = subsetXORSum(v);
    cout<<ans<<endl;
    return 0;
}