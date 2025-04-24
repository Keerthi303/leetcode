/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void merge(int a[],int start,int mid,int end){
    int i=start;
    int j= mid+1;
    int k=0;
    int b[end-start+1];
    while(i<=mid&&j<=end){
        if(a[i]<a[j])b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=mid)b[k++]=a[i++];
    while(j<=end)b[k++]=a[j++];
    k=0;
    for(int i=start;i<=end;i++){
        a[i]=b[k++];
    }
    
}
void mergesort(int a[],int start,int end){
    if(start>=end) return ;
    int mid=(start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,end);
}
int* numberGame(int* nums, int numsSize, int* returnSize) {
     mergesort(nums,0,numsSize-1);
    int *b = (int*)malloc(numsSize*sizeof(int));
    int k=0;
    for(int i=0;i<numsSize;i+=2)
    {
    int temp = nums[i];
    nums[i]=nums[i+1];
    nums[i+1]=temp;
    }
    *returnSize = numsSize;
    return nums;
}