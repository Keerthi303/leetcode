int countQuadruplets(int* nums, int numsSize) {
    int s=0;
    int n=numsSize;
    for(int i=0;i<numsSize-3;i++){
        for(int j=i+1;j<numsSize-2;j++){
            for(int k=j+1;k<n-1;k++){
                    for(int m=k+1;m<n;m++){
                        if(nums[i]+nums[j]+nums[k]==nums[m])s++;
                    }
                }
            }
        }
    return s;
}