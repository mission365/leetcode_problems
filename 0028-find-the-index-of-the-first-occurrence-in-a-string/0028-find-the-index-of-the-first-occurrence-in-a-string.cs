public class Solution {
    public int StrStr(string haystack, string needle) {
        int n = haystack.Length;
        int s = needle.Length;
        int idx = 0;

        for (int i = 0; i < n; i++) {
            if (haystack[i] == needle[idx]) {
                idx++;
            } else {
                i -= idx;
                idx = 0;
            }

            if (idx == s) {
                return i - s + 1;
            }
        }

        return -1;
    }
}
