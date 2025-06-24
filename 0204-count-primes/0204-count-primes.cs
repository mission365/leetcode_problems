public class Solution {
    public int CountPrimes(int n) {
        List<int> v = new List<int>(new int[n + 1]);
        for (int i = 0; i <= n; i++) {
            v[i] = 1;  // Initialize the list with 1
        }

        int cnt = 0;
        for (int i = 2; i <= Math.Sqrt(n); i++) {
            if (v[i] == 1) {
                for (int j = i * i; j < n; j += i) {
                    v[j] = 0;  // Mark non-prime numbers as 0
                }
            }
        }

        for (int i = 2; i < n; i++) {
            if (v[i] == 1) {
                cnt++;
            }
        }

        return cnt;
    }
}
