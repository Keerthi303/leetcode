int countKDifference(int* nums, int numsSize, int k) {
    int n=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
        if(abs(nums[i]-nums[j])==k)n++;
        }
    }
    return n;
}