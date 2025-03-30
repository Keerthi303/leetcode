/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void sort(int a[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
 }
 int check(int a[],int n, int k){
    for(int i = 0; i < n; i++){
        if(a[i]==k){
         return i;
        }
    }
    return 0;
    }
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int dc[101]={0};
    *returnSize = numsSize;
    int *res = (int*)malloc(numsSize*sizeof(int));
    int a[numsSize];
    for( int i = 0; i < numsSize; i++){
    a[i]=nums[i];
    dc[nums[i]]++;
    }
    sort(a,numsSize);
    for( int i = 0; i < numsSize; i++){
     res[i] = check(a,numsSize,nums[i]);
    }
    return res;
}