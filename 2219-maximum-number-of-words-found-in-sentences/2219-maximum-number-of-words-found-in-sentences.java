class Solution {
    public int mostWordsFound(String[] sentences) {
        int l = 0;
        int max = 0;
        for(int i = 0 ; i < sentences.length;i++){
            int sum = 0;
         for(int j = 0 ; j < sentences[i].length();j++){
            if(sentences[i].charAt(j)!=' ') l =1 ;
            else{
                sum++;
                l = 0;
            }
         }
          if(sum > max ) max = sum;
        }
        return max+1;
    }
}