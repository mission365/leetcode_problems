using System;
using System.Collections.Generic;

public class Solution {
    public IList<string> FindRepeatedDnaSequences(string s) {
        int n = s.Length;
        List<string> ans = new List<string>();
        if (n < 10) return ans;

        Dictionary<string, int> mp = new Dictionary<string, int>();

        for (int i = 0; i <= n - 10; i++) {
            string str = s.Substring(i, 10);
            if (mp.ContainsKey(str)) {
                mp[str]++;
            } else {
                mp[str] = 1;
            }
        }

        foreach (var kvp in mp) {
            if (kvp.Value > 1) {
                ans.Add(kvp.Key);
            }
        }

        return ans;
    }
}
