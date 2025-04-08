/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int min(int *a,int n){
    int min=INT_MAX,index;
    for(int i=0;i<n;i++){
        if(a[i]<min)
        {
            min =a[i];
            index=i;
    }
    }
    return index;
}
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    for(int i=0;i<k;i++){
        int l=min(nums,numsSize);
        nums[l]=nums[l]*multiplier;
    }
    *returnSize = numsSize;
    return  nums;
}