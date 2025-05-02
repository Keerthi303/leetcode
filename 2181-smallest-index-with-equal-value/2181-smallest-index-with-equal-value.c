int smallestEqual(int* nums, int numsSize) {
    int index=INT_MAX;
    for(int i=0;i<numsSize;i++){
         if(index>i){
            if(nums[i]==i%10)
            index=i;
         }
        }
        if(index>=0&&index<numsSize)
    return index;
    return -1;
}