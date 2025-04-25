int sumOfGoodNumbers(int* nums, int numsSize, int k) {
    int c=0;
    for(int i=0;i<numsSize;i++){
       int r=i-k;
       int h=i+k;
    if(r>=0&&h<=numsSize-1){
        if(nums[i]>nums[r]&&nums[i]>nums[h])c+=nums[i];
    }
    else if(r>=0&&h>numsSize-1){
        if(nums[i]>nums[r])c+=nums[i];
    }
    else if(r<0&&h<=numsSize-1){
        if(nums[i]>nums[h]) c+=nums[i];
    }
    }
    return c;
}