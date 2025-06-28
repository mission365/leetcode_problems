class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = sqrt(c);

        while(a<=b){
            long long res = a*a+b*b;
            if(res==c) return true;
            else if(res<c) a++;
            else b--;
        }

        return false;
    }
};