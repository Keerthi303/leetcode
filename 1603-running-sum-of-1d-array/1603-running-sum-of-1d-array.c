/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
  int *a = (int*)malloc(numsSize*sizeof(int));
  *returnSize = numsSize;
  int k=0;
  for(int i=0;i<numsSize;i++){
    a[i] = nums[i]+k;
    k += nums[i];
  }
  return a;
}