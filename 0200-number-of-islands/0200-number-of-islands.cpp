class Solution {
public:
    void DFS(int i,int j,vector<vector<char>>& grid){
        if(j >= grid[0].size() || i >= grid.size()||i<0||j<0||grid[i][j]=='0')
        return ;
                grid[i][j] = '0';
                DFS(i-1,j,grid);
                DFS(i+1,j,grid);
                DFS(i,j-1,grid);
                DFS(i,j+1,grid);
        }
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
       for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            if(grid[i][j] == '1'){
               DFS(i,j,grid);
               cnt++;
            }
        }
       }
       return cnt;
    }
};