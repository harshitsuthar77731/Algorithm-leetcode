class Solution {
public:
    void fun(int ind ,vector<int>& can, int target,vector<vector<int>>&ans,vector<int>&v){
        // cout<<target<<endl;
        if(ind>=can.size())
            return;
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(target>=can[ind]){
            v.push_back(can[ind]);
            fun(ind,can,target-can[ind],ans,v);
            v.pop_back();
        }
        fun(ind+1,can,target,ans,v);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        fun(0,candidates,target,ans,v);
        return ans;
    }
};
