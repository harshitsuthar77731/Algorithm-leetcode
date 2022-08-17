class Solution {
public:
    void dfs(int i,int j,int m,int n,vector<vector<char>>& grid){
        if(i<0||j<0||i>=m||j>=n||grid[i][j]=='0'||grid[i][j]=='2')
            return;
        grid[i][j] = '2';
        dfs(i+1,j,m,n,grid);
        dfs(i,j+1,m,n,grid);
        dfs(i-1,j,m,n,grid);
        dfs(i,j-1,m,n,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid.size(),grid[i].size(),grid);
                    count++;
                }
            }
        }
        return count;
    }
};
