int largest(int n){
    int max=0;
    while(n!=0){
        if(n%10>max) max=n%10;
        n=n/10;
    }
    return max;
}
int ones(int n){
    int i=1;
    int k=1;
    while(--n){
      i+=pow(10,k);
      k++;
    }
    return i;
}
int sumOfEncryptedInt(int* nums, int numsSize) {
    int sum=0,k;
    for(int i=0;i<numsSize;i++){
        int l=log10(nums[i])+1;
        sum+=largest(nums[i])*ones(l);
    }
    return sum;
}