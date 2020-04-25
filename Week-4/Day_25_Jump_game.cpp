class Solution {
    //First I tried submitting a recursive and Dp O(n2) solution,
    //similar to Min jumps problem but it gives TLE
public:
    /*int Jumps(vector<int>nums,int n)
    {
        if(n==1)
            return 0;
        int res=INT_MAX;
        for(int i=0;i<=n-2;i++)
        {
            if(i+nums[i]>=n-1)
            {
                int sub_res=Jumps(nums,i+1);
                if(sub_res!=INT_MAX)
                    res=min(res,sub_res+1);
            }
        }
        return res;
    }*/
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;
        if(nums[0]==0)
            return false;
        /*int res=Jumps(nums,n);
        if(res!=INT_MAX)
            return true;
        else
            return false;*/
        /*int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++)
            dp[i]=INT_MAX;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(j+nums[j]>=i && dp[j]!=INT_MAX)
                    dp[i]=min(dp[i],dp[j]+1);
            }
        }
        if(dp[n-1]!=INT_MAX)
            return true;
        else 
            return false;
        */


        //Optimal solution O(n), is use greedily increase the position from a single jump
        //takes a single iteration of given integer vectors.
        int maxright=0;
        for(int i=0;i<=n-1;i++)
        {
            
            if(i>maxright)
                return false;
            maxright=max(maxright,nums[i]+i);
        }
        return true;
        
    }
};