class Solution {
public:
    vector<vector<int>>v;
    void fun(int i,int n, int k,vector<int>&temp){
        // base case
        if(temp.size()==k){
            v.push_back(temp);
            return;
        }
        if(i>n)
            return;
        // recursive case
        for(int ind = i;ind<=n;ind++){
            temp.push_back(ind);
            fun(ind+1,n,k,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        fun(1,n,k,temp);
        return v;
    }
};
