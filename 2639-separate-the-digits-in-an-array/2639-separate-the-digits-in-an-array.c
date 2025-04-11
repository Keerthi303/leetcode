/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int n=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0)n+=1;
        else n+=log10(nums[i])+1;
    }
    *returnSize = n;
    int *a = (int*)malloc(n*sizeof(int));
    int l=0;
    for(int i=0;i<numsSize;i++){
            int k=nums[i];
            if(k==0)a[l++]=0;
            else{
            int h=log10(k);
            while(h>=0){
            a[l++]=k/pow(10,h);
            k=k%(int)pow(10,h);
            h--;
            }
            }
        }
    return a;
}