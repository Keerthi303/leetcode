/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *a= (int*)malloc((numsSize/2)*sizeof(int));
     int *b = (int*)malloc((numsSize/2)*sizeof(int));
      int *res = (int*)malloc((numsSize)*sizeof(int));
      int n=0,m=0;
      for(int i=0;i<numsSize;i++){
        if(nums[i]>0) a[n++] = nums[i];
        else b[m++] = nums[i];
      }
      m=0;
      n=0;
       for(int i=0;i<numsSize;i+=2){
        res[i]=a[m++];
        res[i+1]=b[n++];
      }
      return res;
}