vector<bool>prime(1e6+1,true);
bool seive(){
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i*i <= 1e6;i++){
        if(prime[i] == true){
            for(int j = i*i; j < 1e6+1;j+= i){
                prime[j] = false;
            }
        }
    }
    return true;
}
int  k = seive();
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        // seive();
        vector<int>nums(2,-1),ans(2,-1);
        int prev = INT_MAX;
        for(int i = left; i <= right; i++){
            if(prime[i] == true){
                if(nums[0] == -1) nums[0] = i;
                else {
                    nums[1] = i;
                    int temp = nums[1]-nums[0];
                    if(prev > temp){
                        prev = temp;
                        ans[0] = nums[0];
                    ans[1] = nums[1];
                    }
                    if(prev == 2) return ans;
                     nums[0] = nums[1];
                     nums[1] = -1;
                }
                
                 
            }
        }
        if(ans[0] == -1 || ans[1] == -1) return{-1,-1};
        return ans;
    }
};