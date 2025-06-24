class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n+1,1);
        int cnt = 0;
        for(int i=2;i<=sqrt(n);i++){
            if(v[i]){
                for(int j =i*i; j<n; j+=i){
                    v[j] = 0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(v[i]) cnt++;
        }
        return cnt;
    }
};