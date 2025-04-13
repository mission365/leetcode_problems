class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string first = s.substr(0,n/2);
        sort(first.begin(),first.end());

        string last = first;
        sort(last.rbegin(),last.rend());

        if(n%2==1) first += s[n/2];
        return first+last;
    }
};