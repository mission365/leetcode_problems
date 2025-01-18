class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1;
        long long high = n;
        long long ans;
        while(low <= high){
            long long mid = low + (high - low)/2;
            long long val = mid*(mid+1)/2;
            if(val<=n){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};