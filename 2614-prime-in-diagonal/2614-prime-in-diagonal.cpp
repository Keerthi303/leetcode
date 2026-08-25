
class Solution {
public:
    
    bool is_prime(int n){
        if(n == 0 || n == 1)return false;
        for(int i =  2; i*i <= n; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
    //   seive();
      int n = nums.size();
      int ans = INT_MIN;
      int i = 0, j = 0;
      while(i < n && j < n){
        if(is_prime(nums[i][j])){
            ans = max(ans,nums[i][j]);
        }
        i++;
        j++;
      }
      i = 0,j = n-1;
      while(i < n && j >= 0){
        //if(i == j ) continue;
        if(is_prime(nums[i][j])){
            ans = max(ans,nums[i][j]);
        }
        i++;
        j--;
      }
      if(ans == INT_MIN) return 0;
        return ans;
    }
};