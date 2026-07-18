
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int s = 0;
        int up = 0;
        int cnt = 1;
        int ans = 0;
        for(int i = 0; i < arr.size()-1;i++){
            if(s == 0 &&  arr[i] < arr[i+1]){
                up = 1;
                cnt++;
            }
            else if(s == 0 && arr[i] > arr[i+1]){
                if(up == 0){
                    cnt = 1;
                }
                else{
                    s = 1;
                    cnt++;

                }
            }
            else if(s == 0 && arr[i] == arr[i+1]){
                cnt = 1;
                up = 0;
            }
            else if(s == 1 && arr[i] == arr[i+1]){
                ans = max(ans,cnt);
                cnt = 1;
                up = 0;
                s = 0;
            }
            else if(s == 1 && arr[i] < arr[i+1]){
                ans = max(ans,cnt);
                cnt = 2;
                up = 1;
                s = 0;
            }
            else if(s == 1 && arr[i] > arr[i+1]){
               cnt++;
            }
        }
        if(s == 1) ans = max(ans,cnt);
        return ans;
    }
};