int findNonMinOrMax(int* nums, int numsSize) {
    if(numsSize==2||numsSize==1)return -1;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<numsSize;i++){
       if(nums[i]>max)max=nums[i];
       if(nums[i]<min)min=nums[i];
        }
      for(int i=0;i<numsSize;i++){
       if(nums[i]!=max&&nums[i]!=min)
       return nums[i];
       
        }
        return 0;
    }
