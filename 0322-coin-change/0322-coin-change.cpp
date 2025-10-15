
class Solution {
public:
    int minCoins(vector<int>& coins, int amount,vector<int> &dp) {
       if(amount == 0) return 0;
       if(amount < 0 ) return INT_MAX;
       int sub = INT_MAX;
       if(dp[amount] != -1) return dp[amount];
       for(int i = 0; i < coins.size(); i++){
        int y = minCoins(coins,amount-coins[i],dp);
        if(y != INT_MAX){
            sub = min(sub,y+1);
        }
       }
       return dp[amount] = sub;
    } 
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        if(minCoins(coins,amount,dp) >= INT_MAX) return -1;
        return minCoins(coins,amount,dp);
    }
       
};