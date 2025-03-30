

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
  *returnSize = numsSize;
  int j=0;
   int *res = (int*)malloc(numsSize*sizeof(int));
 for(int i = 0 ; i < n ; i++){
    res[j]=nums[i];
    j=j+2;
 }
 j=1;
  for(int i = n ; i < 2*n ; i++){
    res[j]=nums[i];
    j=j+2;
 }
   return res;

}