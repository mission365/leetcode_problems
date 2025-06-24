class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;
        string vowels = "aeiouAEIOU";


        while(i<j){
            while(i<j && vowels.find(s[i])==string::npos) i++;
            while(i<j && vowels.find(s[j])==string::npos) j--;
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};