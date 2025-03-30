/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int a[numsSize];
    for(int i=0;i<numsSize;i++){
        a[i]=nums[i];

    }
 nums = (int*)malloc(2*numsSize*sizeof(int));
*returnSize = 2*numsSize;
for(int i = 0; i < numsSize; i++){
nums[i]=a[i];
nums[i+numsSize]=a[i];
}
return  nums;
}