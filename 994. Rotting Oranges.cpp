
//if grid[i][j] is greater than and less than min we have reached that element once
class Solution {
public:
    void dfs(int i,int j,int min,vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        if(i<0||j<0||i>=m||j>=n||grid[i][j]==0||(1<grid[i][j]&&grid[i][j]<min))
            return;
        grid[i][j] = min;
        dfs(i+1,j,min+1,grid);
        dfs(i,j+1,min+1,grid);
        dfs(i,j-1,min+1,grid);
        dfs(i-1,j,min+1,grid);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2)
                    dfs(i,j,2,grid);
            }
        }
        int ans = 2;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                    return -1;
                ans = max(ans,grid[i][j]);
            }
        }
        ans-=2;
        return ans;
    }
};
