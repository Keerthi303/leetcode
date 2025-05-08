/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
     int *a = (int*)malloc(numsSize/2*sizeof(int));
    int *b = (int*)malloc(numsSize/2*sizeof(int));
    int i=0,j=0;
    for(int k=0;k<numsSize;k++){
        if(nums[k]%2==0){
            a[i++]=nums[k];
        }
        else {
            b[j++]=nums[k];
        }
    }
    int *res = (int*)malloc(numsSize*sizeof(int));
    int k=0;
   int m=i,n=j;
   i=0,j=0;
    while(i!=m&&j!=n){
      res[k++]=a[i++];
      res[k++]=b[j++];
    }
    *returnSize=k;
    free(a);
    free(b);
    return res;
}