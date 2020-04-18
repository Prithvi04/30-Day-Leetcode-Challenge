class Solution {
public:
    //Most Pouplar interveiw problem to test Graph algorithms
    //Can be solved using BFS, DFS and Disjoint set(if you are aware of this)
    //I solved it using DFS(Depth First Search) is better soltion compared to Dis-sets in time complexity
    void DFS(vector<vector<char>>& grid,int i,int j,int m,int n)
    {
        grid[i][j]='0';
        if(i-1>=0 && grid[i-1][j]=='1')
            DFS(grid,i-1,j,m,n);
        if(i+1<m && grid[i+1][j]=='1')
            DFS(grid,i+1,j,m,n);
        if(j+1<n && grid[i][j+1]=='1')
            DFS(grid,i,j+1,m,n);
        if(j-1>=0 && grid[i][j-1]=='1')
            DFS(grid,i,j-1,m,n);
        
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        if(m==0)
            return 0;
        int n=grid[0].size();
        if(n==0)
            return 0;
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    DFS(grid,i,j,m,n);
                }
            }
        }
        return count;
    }
};