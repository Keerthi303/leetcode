class Solution {
public:
    vector<vector<int>> generateMatrix(int N) {
        int n = N;
        vector<vector<int>> ans(n,vector<int>(n,0));
        int i = 0,j=0;
        int cnt = 1;
        while(n > 1){
            for(int k = 0; k < n-1 ;k++){
                ans[i][j] = cnt;
                cnt++;
                j++;
            }
            for(int k = 0; k < n-1 ;k++){
                ans[i][j] = cnt;
                cnt++;
                i++;
            }
            for(int k = 0; k < n-1 ;k++){
                ans[i][j] = cnt;
                cnt++;
                j--;
            }
            for(int k = 0; k < n-1 ;k++){
                ans[i][j] = cnt;
                cnt++;
                i--;
            }
            n-=2;
            i++;
            j++;
        }
        while(n>0){
            ans[i][j] = cnt;
            cnt++;
            i++;
            n--;
        }
        return ans;

    }
};