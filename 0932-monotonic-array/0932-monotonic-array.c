bool isMonotonic(int* nums, int numsSize) {
    int in = 0,de = 0;
for(int i=0;i<numsSize-1;i++){
  if(!(nums[i]>nums[i+1]||nums[i]==nums[i+1])) {
    in = -1;
  break;
  }
}
for(int i=0;i<numsSize-1;i++){
  if(!(nums[i]<nums[i+1]||nums[i]==nums[i+1])) {
    de = -1;
  break;
  }
}
if(in==0&&de==0)return 1;
return !(in==de);
}