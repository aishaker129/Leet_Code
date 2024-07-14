#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int findPermutationDifference(string s,string t){
    vector<pair<int,int>>p;
    for(int i=0; i<s.size(); i++){
        int idx = 0;
        for(int j=0; j<t.size(); j++){
            if(s[i]==t[j]){
                idx = j;
                break;
            }
        }
        p.emplace_back(i,idx);
    }

    int sum = 0;
    for(int i=0; i<p.size(); i++){
        sum +=abs(p[i].first-p[i].second);
    }
    return sum;
}
int main(){
    optimize();
    string s,t;
    cin>>s>>t;
    int ans = findPermutationDifference(s,t);
    cout<<ans<<endl;
    return 0;
}