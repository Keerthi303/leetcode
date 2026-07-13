class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> ans;
       int n = matrix.size(),m = matrix[0].size();
       int i = 0,j = 0;
       while(n > 1 && m > 1){
        for(int k = 0; k < m-1;k++){
            ans.push_back(matrix[i][j]);
            j++;
        }
        for(int k = 0; k < n-1;k++){
            ans.push_back(matrix[i][j]);
            i++;
        }
        for(int k = 0; k < m-1;k++){
            ans.push_back(matrix[i][j]);
            j--;
        }
        for(int k = 0; k < n-1;k++){
            ans.push_back(matrix[i][j]);
            i--;
        }
        n -= 2;
        m -= 2;
        i++;
        j++;
       }
        while(n == 1 && m > 0 ){
        ans.push_back(matrix[i][j]);
        j++;
        m--;
        }
        while(n > 0 && m ==1){
        ans.push_back(matrix[i][j]);
        i++;
        n--;
        }
       return ans;
    }
};