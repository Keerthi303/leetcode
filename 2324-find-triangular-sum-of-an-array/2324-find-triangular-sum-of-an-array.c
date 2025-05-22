int triangularSum(int* nums, int numsSize) {
    void sum(int nums[],int k){
        if(k==0)return ;
            k=k-1;
            for(int i=0;i<k;i++){
                nums[i]=(nums[i]+nums[i+1])%10;
            }
            sum(nums,k);
    }
    sum(nums,numsSize);
    return nums[0];
}