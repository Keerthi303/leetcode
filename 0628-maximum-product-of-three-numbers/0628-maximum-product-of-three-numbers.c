void merge(int *a,int start,int mid,int end){
    int i=start,j=mid+1;
    int b[end-start+1];
    int k=0;
    while(i<=mid&&j<=end){
        if(a[i]<a[j])b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=end) b[k++]=a[j++];
     k=0;
    for(int i=start;i<=end;i++){
        a[i]=b[k++];
    }
}
void mergesort(int *a,int start,int end){
    if(start>=end)return ;
    int mid=(start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,end);
}
int maximumProduct(int* nums, int numsSize) {
    int n=numsSize;
mergesort(nums,0,numsSize-1);
int i=nums[n-1]*nums[n-2]*nums[n-3];
int j=nums[0]*nums[1]*nums[n-1];
if(i>j)return i;
return j;
}