class Solution {
public:
    //Assume that each element in the matrix is the bottom right element in a square. If it is 0, it cannot form a square. If it is a 1, the largest square it can form (in terms of side) is the minimum of the largest squares that can be formed by its left, top, and top left neighbours, plus 1. The first row and column of the dp table are simply the first row and column of the matrix.
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        if(n==0)
            return 0;
        int m=matrix[0].size();
        int dp[n][m];
        
        int maxcount=0;
        for(int i=0;i<n;i++)
        {
            dp[i][0]=matrix[i][0]=='0'?0:1;
            maxcount=max(maxcount,dp[i][0]);
        }
        for(int i=0;i<m;i++)
        {
            dp[0][i]=matrix[0][i]=='0'?0:1;
            maxcount=max(maxcount,dp[0][i]);
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                dp[i][j]=matrix[i][j]=='0'?0:(min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+1);
                maxcount=max(maxcount,dp[i][j]);
            }
        }
        return maxcount*maxcount;
        
    }
};