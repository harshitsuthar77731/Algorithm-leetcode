class Solution {
public:
    void fun(int ind,string digits,unordered_map<int,string>&mp,string &temp,vector<string>&ans){
        // base case
        if(digits.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        // recursive case
        string s = mp[digits[ind]-'0'];
        for(int i=0;i<s.size();i++){
            temp+=s[i];
            fun(ind+1,digits,mp,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        unordered_map<int,string>mp;
        mp.insert({2,"abc"});
        mp.insert({3,"def"});
        mp.insert({4,"ghi"});
        mp.insert({5,"jkl"});
        mp.insert({6,"mno"});
        mp.insert({7,"pqrs"});
        mp.insert({8,"tuv"});
        mp.insert({9,"wxyz"});
        string temp = "";
        vector<string>ans;
        fun(0,digits,mp,temp,ans);
        return ans;
    }
};
