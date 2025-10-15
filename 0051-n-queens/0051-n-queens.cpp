class Solution {
public:
    bool isValid(int i,int j,vector<string>&a,int n){
        //  top
        int tR = i, tC = j;
        while(tR >= 0 ){
            if(a[tR][tC] == 'Q') return false;
            tR--;
        }
        //right diagonal
        int rdr = i,rdc = j;
        while(rdr >= 0 && rdc < n){
            if(a[rdr][rdc] == 'Q') return false;
            rdr--;
            rdc++;
        }
        //left diagonal
        int ldr = i,ldc = j;
        while(ldr >= 0 && ldc >= 0){
            if(a[ldr][ldc] == 'Q') return false;
            ldr--;
            ldc--;
        }
        return true;

    }
    void Solve(int row,vector<vector<string>>&ds,vector<string>&A,int n){
        if(row == n){
            ds.push_back(A);
            return;
        }
        for(int i = 0; i < n; i++){
        if(isValid(row,i,A,n)){
            A[row][i] = 'Q';
            Solve(row+1,ds,A,n);
            A[row][i] = '.';
        }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ds;
        vector<string> A;
        for(int i = 0; i < n; i++){
            string s;
            for(int j = 0; j < n; j++){
               s += '.';
            }
            A.push_back(s);
        }
        Solve(0,ds,A,n);
        return ds;
    }
};