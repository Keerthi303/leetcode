class Solution {
public:
    int countTriplets(vector<int>& arr) {
        //if(arr.size() <= 2) return 0;
        vector<int>pf(arr.size()+1);
        pf[0] = 0;
        for(int i = 0; i < arr.size(); i++){
           pf[i+1] = pf[i]^arr[i];
        }
        int cnt = 0;
        for(int i = 0; i < arr.size(); i++){
            for(int j = i+1; j < arr.size(); j++){
                for(int k = j; k < arr.size();k++){
                    int a = pf[j]^pf[i];
                    int b = pf[k+1]^pf[j];
                    if(a == b) cnt++;
                }
            }
        }
        return cnt;
    }
};