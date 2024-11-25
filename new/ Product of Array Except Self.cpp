// #include<bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl '\n'
// typedef long long ll;


// // vector<int> productExceptSelf(vector<int>& nums) {
        
// //     }

// int main(){
//     optimize();

//     int n; cin>>n;
//     vector<int> nums,product,prefix,suffix;
//     for(int i=0; i<n; i++){
//         int a; cin>>a;
//         nums.push_back(a);
//     }
//     int pp = 1;
//     for(auto u:nums){
//         pp *=u;
//         prefix.push_back(pp);
//     }
//     int ss = 1;
//     for(int i=nums.size()-1; i>=0; i--){
//         ss *=nums[i];
//         suffix.push_back(ss); 
//     }
//     reverse(suffix.begin(),suffix.end());
//     product.push_back(suffix[1]);
//     for(int i=1; i<nums.size()-1; i++){
//         int ans = prefix[i-1] * suffix[i+1];
//         product.push_back(ans);
//     }
//     product.push_back(prefix[prefix.size()-2]);

//     for(auto u:product){
//         cout<<u<<" ";
//     }
//     cout<<endl;

    

    
//     // int j = 0;
//     // while(j<nums.size()){
//     //     int pre = 1;
//     //     int suf = 1;
//     //     for(int i=0; i<j; i++){
//     //         pre *=nums[i];
//     //     }

//     //     for(int i = nums.size()-1; i>j; i--){
//     //         suf *=nums[i];
//     //     }
//     //     product.push_back(pre*suf);
//     //     j++;
//     // }

//     // for(auto u:product) cout<<u<<" ";
//     // cout<<endl;



//     return 0;
// }


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product,suffix,prefix;
        int pp = 1;
    for(auto u:nums){
        pp *=u;
        prefix.push_back(pp);
    }
    int ss = 1;
    for(int i=nums.size()-1; i>=0; i--){
        ss *=nums[i];
        suffix.push_back(ss); 
    }
    reverse(suffix.begin(),suffix.end());
    product.push_back(suffix[1]);
    for(int i=1; i<nums.size()-1; i++){
        int ans = prefix[i-1] * suffix[i+1];
        product.push_back(ans);
    }
    product.push_back(prefix[prefix.size()-2]);
        return product;
    }
};