#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

string reversePrefix(string s,char ch){
    int idx = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch){
            idx = i;
            break;
        }
    }
    string rev = "";
    for(int i=idx; i>=0; i--){
        rev +=s[i];
    }
    for(int i=idx+1; i<s.size(); i++){
        rev +=s[i];
    }
    return rev;
}

int main(){
    optimize();
    string s;
    cin>>s;
    char ch; cin>>ch;
    string str = reversePrefix(s,ch);
    cout<<str<<endl;
    return 0;
}