class Solution {
    public int[] numberOfPairs(int[] nums) {
        HashMap<Integer,Integer>fmap = new  HashMap<>();
        for( int x : nums){
            fmap.put(x,fmap.getOrDefault(x,0)+1);
        }
        int p = 0,np =0;
        for(int x : fmap.keySet()){
            if(fmap.get(x) >=2){
               p += fmap.get(x)/2;
            fmap.put(x,fmap.get(x)%2);
            }
            if(fmap.get(x) == 1) np++;
        }
        int[] res = new int[2];
        res[0] =(p);
        res[1] =(np);
        return res;
    }
}