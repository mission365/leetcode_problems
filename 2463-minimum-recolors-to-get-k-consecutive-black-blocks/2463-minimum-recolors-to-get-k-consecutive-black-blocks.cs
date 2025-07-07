using System;
public class Solution {
    public int MinimumRecolors(string blocks, int k) {
        int n = blocks.Length;
        if(n<k) return 0;
        int mx = int.MaxValue;
        for(int i=0;i<=n-k;i++){
            int cnt = 0;
            for(int j=i;j<i+k;j++){
                if(blocks[j]=='W'){
                    cnt++;
                }
            }
            mx = Math.Min(mx,cnt);
        }
        return mx;
    }
}