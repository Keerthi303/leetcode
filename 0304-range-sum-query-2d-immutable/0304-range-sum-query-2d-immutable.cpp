class NumMatrix {
public:
    vector<vector<int>>prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        prefix.resize(n,vector<int>(m,0));
        for(int i = 0; i < n;i++){
            prefix[i][0] = matrix[i][0];
        }
        for(int i = 0; i < n;i++){
           for(int j = 1; j < m; j++){
             prefix[i][j] = prefix[i][j-1]+matrix[i][j];
           }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        int r1 = min(row1,row2),r2 = max(row1,row2);
        int c1 = max(col1,col2),c2 = min(col1,col2);
        for(int i = r1; i <= r2;i++){
            if(c2 != 0){
                sum += prefix[i][c1]-prefix[i][c2-1];
            }
            else {
                sum += prefix[i][c1];
            }
        }
        return sum;
    }

};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */