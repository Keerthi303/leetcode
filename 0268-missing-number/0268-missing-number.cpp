class Solution {
public:
    int missingNumber(vector<int>& a) {
        sort(a.begin(),a.end());
        int k = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] !=  k)return k;
            k++;
        }
        return k;
    }
};