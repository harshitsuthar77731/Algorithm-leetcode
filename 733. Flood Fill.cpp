class Solution {
public:
    void bfs( int x,int y,int m,int n, int color,int srccolor,vector<vector<int>>& image){
        if(x<0||y<0||x>=m||y>=n||image[x][y]!=srccolor||image[x][y]==color)
            return;
        image[x][y] = color;
        bfs(x+1,y,m,n,color,srccolor,image);
        bfs(x,y+1,m,n,color,srccolor,image);
        bfs(x-1,y,m,n,color,srccolor,image);
        bfs(x,y-1,m,n,color,srccolor,image);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        bfs(sr,sc,image.size(),image[0].size(),color,image[sr][sc],image);
        return image;
    }
};
