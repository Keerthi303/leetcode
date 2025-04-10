int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum=0;
    int k=matSize-1;
    for(int i=0;i<matSize;i++){
        for(int j=0;j<matColSize[0];j++){
            if(i==j)sum+=mat[i][j];
            else if(i+j==k) sum+=mat[i][j];
        }
    }
    return sum;
}