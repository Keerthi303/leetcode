/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int *a = (int*)malloc(numsSize*sizeof(int));
    int dc[100001]={0};
    for(int i=0;i<numsSize;i++){
       dc[nums[i]]++;
    }
    int k=0;
    for(int i=0;i<100001;i++){
        if(dc[i]>=2){
            a[k++]=i;
        }
    }
    *returnSize = k;
    return a;
}