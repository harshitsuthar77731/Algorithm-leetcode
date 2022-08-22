class Solution {
public:
    void fun(int ind,vector<int>&temp,vector<int>& nums,vector<vector<int>>&ans){
        if(ind == nums.size()){
            ans.push_back(temp);
            return;
        }
        // recursive case
        temp.push_back(nums[ind]);
        fun(ind+1,temp,nums,ans);
        temp.pop_back();
        // imp condn;
        while(ind+1<nums.size()&&nums[ind]==nums[ind+1]) ind++;
        fun(ind+1,temp,nums,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        fun(0,temp,nums,ans);
        return ans;
    }
};
