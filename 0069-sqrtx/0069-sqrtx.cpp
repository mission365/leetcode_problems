class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x;

        while(low <= high){
            long long mid = low + (high - low)/2;
            long long square = mid*mid;
            if(square == x) return mid;
            else if (square < x){
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return round(high);
    }
};