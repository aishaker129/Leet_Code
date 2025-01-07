class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int i=0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            s.push_back(str); 
        }

        sort(begin(s),end(s),[](string &s, string &s1){return s+s1>s1+s;});
        string str = "";
        for(auto u:s){
            str +=u;
        }
        while(str[0]=='0' && str.size()>1){
            str.erase(0,1);
        }
        return str;
    }
};

