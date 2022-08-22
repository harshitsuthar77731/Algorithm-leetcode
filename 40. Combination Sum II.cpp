// type of knapsack

class Solution {
public:
    // knapsack
    void fun(int ind,int target,vector<int>& can,vector<int>&temp,vector<vector<int>>&ans){
        if(target==0&&ind<=can.size()){
            ans.push_back(temp);
            return;
        }
        if(ind>=can.size())
            return;
        if(target>=can[ind]){
            temp.push_back(can[ind]);
            fun(ind+1,target-can[ind],can,temp,ans);
            temp.pop_back();
        }
        while(ind+1<can.size()&&can[ind]==can[ind+1]) ind++;
        fun(ind+1,target,can,temp,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(can.begin(),can.end());
        fun(0,target,can,temp,ans);
        return ans;
    }
};
