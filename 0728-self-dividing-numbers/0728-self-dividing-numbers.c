/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int selfdiv(int n){
    int k=n;
    int l=log10(n)+1,s=0;
    while(n!=0){
        int r=n%10;
        if(r==0||k%r!=0) return 0;
        n=n/10;
    }
    return 1;
 }
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *b = (int*)malloc((right-left+1)*(sizeof(int)));
    int k=0;
    for(int i=left;i<=right;i++){
     if(selfdiv(i)){
        b[k++] = i;
     }
    }
     *returnSize = k;
    return b;
}