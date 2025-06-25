using System;

public class Solution
{
    public string ReverseWords(string s)
    {
        int n = s.Length;
        string ans = "";

        // Reverse the entire string
        char[] charArray = s.ToCharArray();
        Array.Reverse(charArray);
        s = new string(charArray);

        int i = 0;
        while (i < n)
        {
            string word = "";
            // Capture the word until we encounter a space
            while (i < n && s[i] != ' ')
            {
                word += s[i];
                i++;
            }
            
            // Reverse the word
            char[] wordArray = word.ToCharArray();
            Array.Reverse(wordArray);
            word = new string(wordArray);

            // Add the word to the result if its length is greater than 0
            if (word.Length > 0)
            {
                ans += " " + word;
            }
            i++; // Skip the space character
        }

        // Remove leading space and return the result
        return ans.Substring(1);
    }
}
