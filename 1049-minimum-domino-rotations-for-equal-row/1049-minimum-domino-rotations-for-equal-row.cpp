class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> a(7),b(7),same(7);
        int n = tops.size();
        for(int i=0;i<n;i++){
            int x = tops[i];
            int y = bottoms[i];
            a[x]++;
            b[y]++;
            if(tops[i]==bottoms[i]) same[tops[i]]++;
        }
        int ans = n;
        for(int i=1;i<=6;i++){
            if(a[i]+b[i]-same[i]==n){
                int minswap = min(a[i],b[i])-same[i];
                ans = min(ans,minswap);
            }
        }
        return ans == n ? -1 : ans;
    }
};