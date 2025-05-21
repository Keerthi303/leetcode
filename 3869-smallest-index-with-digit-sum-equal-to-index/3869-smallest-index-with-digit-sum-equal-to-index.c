int sum(int n){
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}
int smallestIndex(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        if(sum(nums[i])==i)return i;
    }
    return -1;
}