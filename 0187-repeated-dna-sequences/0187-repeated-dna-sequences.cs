using System;
using System.Collections.Generic;

public class Solution {
    public IList<string> FindRepeatedDnaSequences(string s) {
        HashSet<string> seen = new HashSet<string>();
        HashSet<string> repeated = new HashSet<string>();

        // If the string is too short, no sequence is possible
        if (s.Length < 10) {
            return new List<string>();
        }

        for (int i = 0; i <= s.Length - 10; i++) {
            string window = FindSubstring(s, i, i + 10);
            if (!seen.Add(window)) {
                repeated.Add(window);
            }
        }

        return new List<string>(repeated);
    }

    public string FindSubstring(string s, int i, int j) {
        char[] temp = new char[j - i];
        
        for (int k = i; k < j; k++) {
            temp[k - i] = s[k];
        }

        string res = "";
        for (int k = 0; k < temp.Length; k++) {
            res += temp[k];
        }

        return res;
    }
}
