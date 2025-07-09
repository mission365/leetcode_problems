using System;
using System.Collections.Generic;

public class Solution {
    public int LengthOfLongestSubstring(string s) {
        HashSet<char> map = new HashSet<char>();
        int i = 0, j = 0, len = 0, n = s.Length;

        while (j < n) {
            if (!map.Contains(s[j])) {
                map.Add(s[j]);
                len = Math.Max(len, j - i + 1);
                j++;
            } else {
                map.Remove(s[i]);
                i++;
            }
        }
        return len;
    }
}
