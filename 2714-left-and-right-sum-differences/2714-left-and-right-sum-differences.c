/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int diff(int a[],int n,int size){
    int l = 0,r = 0;
    for(int i = 0; i < n; i++){
        l+=a[i];
    } 
    for(int i = n+1; i < size; i++){
        r+=a[i];
    }
    return abs(l-r);
 }
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *res = (int*)malloc(numsSize*sizeof(int));
     for(int i = 0; i < numsSize; i++){
        res[i]=diff(nums,i,numsSize);
     }
     return res;
}
