class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int i = 0,j=0;
        vector<int>res;
        while(i != mat.size() && j != mat[0].size() ){
            if((i+j)%2 == 0){
               res.push_back(mat[i][j]);
               if(i-1 >= 0 && j+1 < mat[i].size()){
                i-=1;
                j+=1;
               }
               else if(j+1 < mat[0].size())  j+=1;
               else  i += 1;
            }
            else if((i+j)%2 != 0){
                res.push_back(mat[i][j]);
                 if(j-1 >= 0 && i+1 <mat.size()){
                 i += 1;
                 j -= 1;}
                else if(i+1 < mat.size()) i+= 1;
                else j+=1;
            }
        }
        return res;
    }
};