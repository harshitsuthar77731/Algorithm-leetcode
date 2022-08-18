class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int x[8] = {1,0,-1,0,1,-1,-1,1};
        int y[8] = {0,1,0,-1,1,-1,1,-1};
        int n = grid.size();
        queue<pair<pair<int,int>,int>>q;
        if(grid[0][0]==1)
            return -1;
        q.push({{0,0},1});
        int ans=-1;
        int visited[101][101] = {0};
        visited[0][0] = 1;
        while(q.size()>0){
            int oldx = q.front().first.first;
            int oldy = q.front().first.second;
            int lev = q.front().second;
            q.pop();
            if(oldx==n-1&&oldy==n-1){
                return lev;
            }
            for(int i=0;i<8;i++){
                int newx = oldx+x[i];
                int newy = oldy+y[i];
                if(newx>=0&&newy>=0&&newx<n&&newy<n&&visited[newx][newy]==0&&grid[newx][newy]!=1){
                    q.push({{newx,newy},lev+1});
                    visited[newx][newy]=1;
                }
            }
        }
        return -1;
    }
};
