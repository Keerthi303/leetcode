/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int dc[100001]={0};
    int max=0;
    int *a = (int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
    dc[nums[i]]++;
    if(nums[i]>max)max=nums[i];
    }
    if(max<numsSize) max=numsSize;
    int k=0;
     for(int i=1;i<=max;i++){
        if(dc[i]==0)
        a[k++]=i;
    }
    *returnSize = k;
    return a;
    

}