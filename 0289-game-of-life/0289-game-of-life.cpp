class Solution {
public:
    int get_neigh(vector<vector<int>> t, int i, int j) {
         int n = t.size(),m = t[i].size();
        int cnt = 0;
        if (i - 1 >= 0) {
            if ((j - 1) >= 0 && t[i - 1][j - 1] == 1)
                cnt++;
        if (t[i - 1][j] == 1)
            cnt++;
        if (j+1 < m && t[i - 1][j + 1] == 1)
            cnt++;
        }
        if (j - 1 >= 0 && t[i][j - 1] == 1)
            cnt++;
        if (j + 1 < m && t[i][j + 1] == 1)
            cnt++;
        if (i + 1 < n) {
            if (j - 1 >= 0 && t[i + 1][j - 1] == 1)
                cnt++;
            if (t[i + 1][j] == 1)
                cnt++;
            if (j + 1 < m && t[i + 1][j + 1] == 1)
                cnt++;
        }
        return cnt;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> temp = board;
        int n = board.size(),m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int k = get_neigh(board,i,j);
                if(k < 2) temp[i][j] = 0;
                if(k > 3) temp[i][j] = 0;
                if(k == 3) temp[i][j] = 1;
            }
        }
        board = temp;
    }
};