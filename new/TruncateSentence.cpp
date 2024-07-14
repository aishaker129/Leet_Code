#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

string truncateSentence(string s,int k){
    int n = s.size();
    string ans = "";
    int idx = 0;
    for(int i=0; i<n; i++){
        if(s[i]==' '){
            idx++;
        }
        if(idx <k){
            ans+=s[i]; 
        }
    }

    return ans;
}
int main(){
    optimize();
    string s;
    getline(cin,s);
    int k; cin>>k;
   string str = truncateSentence(s,k);
   cout<<str<<endl;
    return 0;
}