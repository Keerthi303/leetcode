void merge(int a[],int start,int mid,int end){
    int b[end-start+1];
    int i=start;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=end){
        if(a[i]<a[j]) b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    while(i<=mid) b[k++]=a[i++];
    while(j<=end) b[k++]=a[j++];
    k=0;
    for(int i=start;i<=end;i++)
	{
		a[i]= b[k++];
	}

}
void mergesort(int a[],int start,int end){
    if(start>=end)return;
    int mid=(start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,end);
}
int maxProductDifference(int* nums, int numsSize){
 mergesort(nums,0,numsSize-1);
 return (nums[numsSize-1] * nums[numsSize-2])-( nums[0] * nums[1]);

}