#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int scoreOfString(string s){
    int n = s.size();
    int sum = 0;
    for(int i=1; i<n; i++){
        sum +=abs(int(s[i])-int(s[i-1]));
    }
    return sum;
}
int main(){
    optimize();
    string s; cin>>s;
    int res = scoreOfString(s);\
    cout<<res<<endl;
    return 0;
}