class Solution {
public:
    void bfs(int x,int y,int m,int n,int &ans,vector<vector<int>>& grid){
        if(x<0||y<0||x>=m||y>=n||grid[x][y]==0||grid[x][y]==-1)
            return;
        grid[x][y] = -1;
        ans++;
        bfs(x+1,y,m,n,ans,grid);
        bfs(x,y+1,m,n,ans,grid);
        bfs(x-1,y,m,n,ans,grid);
        bfs(x,y-1,m,n,ans,grid);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxm = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int ans = 0;
                if(grid[i][j]==1){
                    bfs(i,j,grid.size(),grid[i].size(),ans,grid);
                    maxm= max(ans,maxm);
                }
            }
        }
        return maxm;
    }
};
