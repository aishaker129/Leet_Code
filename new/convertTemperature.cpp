#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

vector<double> convertTemperature(double celsius){
    vector<double> v;
    v.push_back(celsius+273.15);
    v.push_back((celsius*1.80)+32.00);
    return v;
}

int main(){
    optimize();
    double a; cin>>a;
    vector<double> ans = convertTemperature(a);
    for(auto u:ans){
        cout<<u<<" ";
    }
    return 0;
}