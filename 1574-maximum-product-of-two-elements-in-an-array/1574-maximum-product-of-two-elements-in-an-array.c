int maxProduct(int* nums, int numsSize) {
    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-1-i;j++){
           if(nums[j]>nums[j+1]){
            int temp =nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
           }
        }
    }
    return (nums[numsSize-1]-1)*(nums[numsSize-2]-1);
}