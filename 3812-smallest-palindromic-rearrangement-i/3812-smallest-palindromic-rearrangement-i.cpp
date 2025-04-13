class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if(n%2==0){
            string first = "";
        for(int i=0;i<n/2;i++){
            first+=s[i];
        }
        string second = "";
        for(int i=n/2;i<n;i++){
            second+=s[i];
        }
        sort(first.begin(),first.end());
        sort(second.rbegin(),second.rend());
        return first+second;
        }
        else{
            string first = "";
        for(int i=0;i<n/2;i++){
            first+=s[i];
        }
        string second = "";
        for(int i=n/2+1;i<n;i++){
            second+=s[i];
        }
        sort(first.begin(),first.end());
        sort(second.rbegin(),second.rend());
        string ans = "";
        ans+=first;
        ans+=s[n/2];
        ans+=second;
        return ans;
        }
    }
};