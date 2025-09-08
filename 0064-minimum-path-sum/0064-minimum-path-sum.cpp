class Solution {
public:
   int dp[200][200];
    int path(vector<vector<int>>& grid,int i, int j,int n, int m){
        if(i >= n || j >= m) return INT_MAX;
        if(i == n-1 && j == m-1) return grid[i][j];
       // if(i < 0 || j < 0) return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        int sub1 = path(grid,i+1,j,n,m);
        int sub2 = path(grid,i,j+1,n,m);
        return dp[i][j] = grid[i][j]+min(sub1,sub2);
    }
    int minPathSum(vector<vector<int>>& grid) {
      memset(dp,-1,sizeof(dp));
      int res = path(grid,0,0,grid.size(),grid[0].size());
      return res;
    }
};