class Solution {
public:
    int dp[101][101];
        int fun(int i,int j,int m,int n){
            
            if(i>=m||j>=n)
                return 0;
            if(i==m-1&&j==n-1){
                return 1;
            }
            if(dp[i][j]!=-1)
                return dp[i][j];
            return dp[i][j] = fun(i+1,j,m,n)+fun(i,j+1,m,n);
        }
        
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return fun(0,0,m,n);
    }
};
