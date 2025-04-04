/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    *returnSize = namesSize;
    for(int i = 0 ; i < namesSize-1 ; i++){
        for(int j = 0 ; j<namesSize-1-i;j++){
          if(heights[j]<heights[j+1]){
                int n= heights[j];
                heights[j]=heights[j+1];
                heights[j+1]=n;
                char* tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }
    return names;
}