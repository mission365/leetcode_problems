public class Solution {
    public string ReverseVowels(string s) {
        char[] word = s.ToCharArray();
        
        int p1 = 0;
        int p2 = word.Length - 1;

        while(p1 < p2) {
            while(p1 < p2 && !IsVowel(word[p1])) {
                p1++;
            }
            while(p1 < p2 && !IsVowel(word[p2])) {
                p2--;
            }

            (word[p1], word[p2]) = (word[p2], word[p1]);
                
            p1++;
            p2--;
        }

        return new string(word);

        bool IsVowel(char c) {
            return c is 'a' or 'e' or 'i' or 'o' or 'u'
                or 'A' or 'E' or 'I' or 'O' or 'U';
        }
    }
}