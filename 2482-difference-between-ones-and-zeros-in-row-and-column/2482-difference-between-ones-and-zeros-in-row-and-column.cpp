class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        vector<int> rows(n,0),col(m,0);
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m ; j++){
                if(grid[i][j] == 1){
                    rows[i]++;
                    col[j]++;
                }
            }
        }
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ; j++){
                ans[i][j] = rows[i]+col[j]-(n-rows[i])-(m-col[j]);
            }
        }
        return ans;
    }
};