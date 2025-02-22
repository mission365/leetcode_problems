class Solution {
public:
    bool areOccurrencesEqual(string s) {
        sort(s.begin(),s.end());
        vector<int> ans;

        for(int i =0;i<s.size();++i){
            int n =0;
           while(s[i]==s[i+1]){
            ++n;
            ++i;
           }
           ans.push_back(n);
        }
        for(int i =0;i<ans.size()-1;++i){
            if(ans[i]!=ans[i+1]){
                return false;
            }
        }
        return true;
    }
};