class Solution {
    static int check(String s){
        int alpha=0,no = 0;
        int i = 0;
        while(i < s.length()){
            if(s.charAt(i)>='a' && s.charAt(i)<='z') alpha++;
            else no++;
            if((alpha != 0 )&& (no != 0)){
                return 3;
            }
            i++;
        }
        if(alpha == 0) return 1;
        else return 2;
    }
    public int maximumValue(String[] strs) {
        int k = 0;
        int max = 0;
        for(int i = 0; i < strs.length; i++){
            if(check(strs[i]) == 1){
             k = Integer.parseInt(strs[i]);
            }
            else if(check(strs[i]) == 2){
             k = strs[i].length();
            }
            else {
                k = strs[i].length();
            }
            if(k > max) {max = k;}
        }
        return max;
    }
}