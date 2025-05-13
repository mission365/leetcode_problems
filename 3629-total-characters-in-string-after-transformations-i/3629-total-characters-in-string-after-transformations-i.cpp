class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int n = s.size();
        long long ans = 0, mod = 1e9+7;
        vector<int> mp(26,0);
        for(auto it: s){
            mp[it-'a']++;
        }

        while(t--){
            vector<int> tmp(26,0);

            for(int i = 0;i<26;i++){
                char ch = i + 'a';
                int x = mp[i];
                if(ch!='z'){
                    tmp[(ch+1)-'a'] = (tmp[(ch+1)-'a']+x)%mod;
                }
                else{
                    tmp['a'-'a'] = (tmp['a'-'a']+x)%mod;
                    tmp['b'-'a'] = (tmp['b'-'a']+x)%mod;
                }
            }
            mp = move(tmp);
        }
        for(int i=0; i<26; i++){
            ans = (ans+mp[i])%mod;
        }
        return ans%mod;
    }
};