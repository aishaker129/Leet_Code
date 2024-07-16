#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int minimumOperations(vector<int>& nums){
    int result = 0;
    for(auto u:nums){
        int m = u%3;
        if(m==1 || m==2) result++;
    }
    return result;
}

int main(){
    optimize();
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    int ans = minimumOperations(v);
    cout<<ans<<endl;
    return 0;
}