/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize = candiesSize;
    bool *res = (bool*)malloc(candiesSize*sizeof(bool));
    int max=0;
    for(int i = 0; i < candiesSize; i++ ){
     if(candies[i]>max)max=candies[i];
    }
    for(int i = 0; i < candiesSize; i++){
        if((candies[i] + extraCandies) < max)
        res[i] = false;
        else 
        res[i] = true;

    }
    return res;
}