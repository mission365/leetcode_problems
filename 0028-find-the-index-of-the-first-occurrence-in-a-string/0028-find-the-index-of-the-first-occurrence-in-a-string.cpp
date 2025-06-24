class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int s = needle.length();
        int idx = 0;
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[idx]){
                idx++;
            }
            else{
                i-=idx;
                idx = 0;
            }
            if(idx==s) return i-s+1;
        }
        return -1;
    }
};