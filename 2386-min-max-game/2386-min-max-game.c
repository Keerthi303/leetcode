int min(int n,int m){
    if(m>n)return  n;
    return m;
}
int max(int n,int m){
    if(m>n)return  m;
    return n;
}
int minMaxGame(int* nums, int numsSize) {
    while(numsSize>1){
    int k=0;
   for(int i=0;i<numsSize;i+=2){
    if(k%2==0){
    nums[k++]=min(nums[i],nums[i+1]);
    }
    else{
    nums[k++]=max(nums[i],nums[i+1]);
    }
   }
       numsSize /= 2;
   }
   return nums[0];
}