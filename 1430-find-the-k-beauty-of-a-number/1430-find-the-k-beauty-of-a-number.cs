public class Solution {
    public int DivisorSubstrings(int num, int k) {
        string s = num.ToString();
        int n = s.Length;
        if(k>n) return 0;
        int cnt = 0;
        for(int i=0;i<=n-k;i++){
            string str = s.Substring(i,k);
            int divisor = int.Parse(str);
            if(divisor !=0 && num%divisor==0){
                cnt++;
            }
        }
        return cnt;
    }
}