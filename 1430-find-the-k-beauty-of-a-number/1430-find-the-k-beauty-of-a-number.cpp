class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size();
        if(k>n) return 0;
        int cnt = 0;
        for(int i=0;i<=n-k;i++){
            string str = s.substr(i,k);
            int divisor = stoi(str);
            if(divisor !=0 && num%divisor==0){
                cnt++;
            }
        }
        return cnt;
    }
};