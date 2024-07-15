#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

string restoreString(string s,vector<int>& indices){
    int n = s.size();
    char ch[n];
    for(int i=0; i<n; i++){
        int indx = indices[i];
        ch[indx] = s[i];
    }
    string str = "";
    for(auto u:ch){
        str +=u;
    }

    return str;
}

int main(){
    optimize();
    string s;
    cin>>s;
    int m = s.size();
    vector<int> v;
    for(int i=0; i<m; i++){
        int a; cin>>a;
        v.push_back(a);
    }

   string ans =  restoreString(s,v);
   cout<<ans<<endl;
//    int n = s.size();
//     char ch[n];
//     for(int i=0; i<n; i++){
//         int indx = v[i];
//         ch[indx] = s[i];
//     }

//     for(auto u:ch){
//         cout<<u;
//     }
//     cout<<endl;
    return 0;
}