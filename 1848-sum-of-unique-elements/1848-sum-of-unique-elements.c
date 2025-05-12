int sumOfUnique(int* nums, int numsSize) {
    int dc[101]={0},c=0;
    for(int i=0;i<numsSize;i++){
        dc[nums[i]]++;
    }
     for(int i=0;i<101;i++){
        if(dc[i]==1){
            c+=i;
        }
    }
    return c;
}