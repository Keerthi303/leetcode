int findLucky(int* arr, int arrSize) {
    int dc[501]={0};
    int max=0;
    for(int i=0;i<arrSize;i++){
        dc[arr[i]]++;
        if(arr[i]>max)max=arr[i];
    }
    int k=0;
    for(int i=1;i<=max;i++){
      if(dc[i]==i&&i>k){
        k=i;
      }
    }
    if(k>0)return k;
    return -1;
}