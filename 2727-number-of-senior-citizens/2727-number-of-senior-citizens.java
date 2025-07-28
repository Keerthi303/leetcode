class Solution {
    public int countSeniors(String[] details) {
    String agelt = "60";
    int sum = 0;
        for(int i = 0; i < details.length;i++){
            String age = "";
            for(int j = 0 ; j < details[i].length(); j++){
                if(details[i].charAt(j)=='M'||details[i].charAt(j)=='F'||details[i].charAt(j)=='O'){
                    age += details[i].charAt(j+1);
                    age += details[i].charAt(j+2);
                    if(age.compareTo(agelt)>0) sum++;
                    break;
                }
            }
        }
        return sum;
    }
}