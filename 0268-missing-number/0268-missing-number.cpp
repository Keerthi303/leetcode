class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size();
        int k = (n*(n+1))/2;
        int sum = 0;
        int j = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 0)j++;
            sum += a[i];
        }
        if(j == 0) return 0;
        if(k-sum == 0)return n+1;
        return k-sum;
    }
};