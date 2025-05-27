/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int *a = (int*)malloc(pricesSize*sizeof(int));
    int k=0;
    for(int i=0;i<pricesSize-1;i++){
        int j=i+1;
        int m=-1;
        while(j!=pricesSize){
          if(prices[j] <= prices[i]) {
              m=j;
            break;
          }
           else  j++;
        }
        if(m==-1)
            a[k++]=prices[i];
        else 
        a[k++]=prices[i]-prices[m];
    }
    a[k++]=prices[pricesSize-1];
    *returnSize = k;
    return a;
}