class Solution {
public:
    //recursive solution let's optimize it using DP;
    /*int mincost(vector<vector<int>>grid,int n,int m)
    {
        if(m<0 || n<0)
            return INT_MAX;
        else if(n==0 && m==0)
            return grid[n][m];
        else
            return grid[n][m]+min(mincost(grid,n-1,m),mincost(grid,n,m-1));
    }*/
    int minPathSum(vector<vector<int>>& grid) {
        //Dp using bottom up approach
        int n=grid.size();
        int m=grid[0].size();
        int dp[n][m];
        dp[0][0]=grid[0][0];
        for(int i=1;i<n;i++)
            dp[i][0]=dp[i-1][0]+grid[i][0];
        for(int j=1;j<m;j++)
            dp[0][j]=dp[0][j-1]+grid[0][j];
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                //As you are restrricted to move only downwards and right.
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n-1][m-1];
        /*int x=mincost(grid,n-1,m-1);
        return x;*/
        
    }
};