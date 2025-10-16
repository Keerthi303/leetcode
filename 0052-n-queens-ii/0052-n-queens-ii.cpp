class Solution {
public:
    bool isValid(int i,int j, vector<string>&a,int n){
        int Ti = i, Tj = j;
        while(Ti >=0){
            if(a[Ti][Tj] == 'Q' )return false;
            Ti--;
        }
        Ti = i, Tj = j;
        while(Ti >=0 && Tj < n){
            if(a[Ti][Tj] == 'Q' )return false;
            Ti--;
            Tj++;
        }
         Ti = i, Tj = j;
        while(Ti >=0 && Tj >= 0){
            if(a[Ti][Tj] == 'Q' )return false;
            Ti--;
            Tj--;
        }
        return true;

    }
    void solve(int row, vector<string>&a, int n, int &k) {
        if (row == n) {
            k++;
            return;
        }
        for (int i = 0; i < n; i++) {
            if (isValid(row, i, a,n)) {
                a[row][i] = 'Q';
                solve(row + 1, a, n, k);
                a[row][i] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> a;
        for (int i = 0; i < n; i++) {
            string s;
            for (int j = 0; j < n; j++) {
                s += '.';
            }
            a.push_back(s);
        }
        int k = 0;
        solve(0, a, n, k);
        return k;
    }
};