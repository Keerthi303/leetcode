class Solution {
public:
    bool isSubValid(int k,int m,vector<vector<char>>&a){
       map<char,int>mpp;
       for(int i = k;i< k+3; i++){
        for(int j = m; j <m+3;j++){
          if(a[i][j] != '.'){
            mpp[a[i][j]]++;
            if(mpp[a[i][j]] > 1) return false;
          }
        }
       }
       return true;
    }
    bool isValid(int i, int j,vector<vector<char>>&board,char k){
        int Ti = i, Tj = j;
    while(Ti > 0){
        Ti--;
        if(board[Ti][Tj] == k) return false;
    }
     Ti = i; Tj = j;
    while(Ti < 8){
        Ti++;
        if(board[Ti][Tj] == k) return false;
    }   
     Ti = i; Tj = j;
    while(Tj > 0){
        Tj--;
        if(board[Ti][Tj] == k) return false;
    }   
     Ti = i; Tj = j;
    while(Tj < 8){
        Tj++;
        if(board[Ti][Tj] == k) return false;
    }   
    return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        bool is_flag ;
        for(int i = 0; i < 9; i+=3){
        for(int j = 0; j < 9; j+=3){
            if(!isSubValid(i,j,board)) return false;
        }
    }
        for(int i = 0; i < 9;i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    is_flag = isValid(i,j,board,board[i][j]);
                    if(is_flag == false) return false;
                }
                 
            }
           
        }
        return true;
    }
};