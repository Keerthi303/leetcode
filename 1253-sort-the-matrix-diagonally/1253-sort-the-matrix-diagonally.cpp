class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int i = 0, j = mat[0].size() - 1;
        int st_i = 0, st_j = mat[0].size() - 1;
        vector<int> s;
        while ((st_i < mat.size()) && (st_j < mat[0].size())) {
            while ((i < mat.size()) && (j < mat[0].size())) {
                s.push_back(mat[i][j]);
                i++;
                j++;
            }
            i = st_i;
            j = st_j;
            sort(s.begin(), s.end());
            int k = 0;
            while (k < s.size()) {
                mat[i++][j++] = s[k++];
            }
            s.clear();
            if(( st_j > 0 )&& (st_i == 0)) {
                st_j--;
            } else{
                st_i++;
            }
            i = st_i;
            j = st_j;
        }
        return mat;
    }
};