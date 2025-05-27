/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int *a = (int*)malloc(numsSize*sizeof(int));
    int k=0,j;
    for(int i=0;i<numsSize;i++){
      if(nums[i]<pivot) a[k++]=nums[i];
    }
    j=k;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==pivot)a[k++] = nums[i];
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]>pivot)a[k++] = nums[i];
    }
    *returnSize = numsSize;
    return a;
}