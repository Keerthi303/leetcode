class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
         vector<int>ans;
        for(int k = 0; k < m; k++){
            int i = 0,j = k;
            while(i < n){
                if(j+1 < m && grid[i][j] == 1  && grid[i][j+1] ==1){
                    i++;
                    j++;
                }
                else if(j-1 >= 0 && grid[i][j] == -1   && grid[i][j-1] == -1){
                    i++;
                    j--;
                }
                else {
                    break;
                }
            }
           if(i >= n)ans.push_back(j);
           else ans.push_back(-1);
            
        }
        return ans;
    }
};