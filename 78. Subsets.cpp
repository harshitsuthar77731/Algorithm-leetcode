class Solution {
public:
    void fun(int ind,vector<int>& nums,vector<int>&temp,vector<vector<int>>&ans){
        // base case
        if(ind==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        //recursive case
        temp.push_back(nums[ind]);
        fun(ind+1,nums,temp,ans);
        temp.pop_back();
        fun(ind+1,nums,temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        fun(0,nums,temp,ans);
        return ans;
    }
};
