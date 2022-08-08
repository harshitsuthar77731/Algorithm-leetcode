class Solution {
public:
    vector<vector<int>>v;
    void fun(int ind,int n,vector<int>& nums){
        //base case
        if(ind==n){
            v.push_back(nums);
        }
        if(ind>=n)
            return;
        for(int i=ind;i<n;i++){
            swap(nums[i],nums[ind]);
            fun(ind+1,n,nums);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        fun(0,nums.size(),nums);
        return v;
    }
};
