class Solution {
    //Most common dynamic Programming solution
public:
    //Recursive based solution for LCS
    // int LCS(string s1,string s2,int m,int n)
    // {
    //     if(m==0 || n==0)
    //         return 0;
    //     if(s1[m-1]==s2[n-1])
    //         return 1+LCS(s1,s2,m-1,n-1);
    //     else
    //         return max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));
    // }
    int longestCommonSubsequence(string text1, string text2) {
        //DP based solution for LCS, can be more space optimized also.
        int m=text1.length();
        int n=text2.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
            dp[i][0]=0;
        for(int j=0;j<=n;j++)
            dp[0][j]=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
        
        
    }
};