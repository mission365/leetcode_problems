public class Solution {
    public int CountGoodSubstrings(string s) {
        int count = 0;
        for (int i = 2; i < s.Length; i++) {
            if (s[i] != s[i - 1] && s[i - 1] != s[i - 2] && s[i] != s[i - 2]) {
                count++;
            }
        }
        return count;
    }
}
