class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>>&mp,vector<vector<int>>&ans,vector<int>&temp){
        temp.push_back(node);
        if(mp.size()==node+1){
            ans.push_back(temp);
        }
        for(auto x:mp[node]){
            dfs(x,mp,ans,temp);
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<graph.size();i++){
            mp[i] = graph[i];
        }
        vector<vector<int>>ans;
        vector<int>temp;
        dfs(0,mp,ans,temp);
        return ans;
    }
};
