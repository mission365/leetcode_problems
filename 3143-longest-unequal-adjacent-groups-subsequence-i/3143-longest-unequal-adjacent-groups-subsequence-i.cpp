class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<pair<int,string>> v;
        vector<pair<string,int>> ans;
        ans.push_back({words[0], groups[0]});
        int n = words.size();
        for(int i=0;i<n;i++){
            v.push_back({groups[i],words[i]});
        }
        for(int i=1;i<n;i++){
            if(ans.back().second != v[i].first){
                ans.push_back({v[i].second, v[i].first});
            }
        }
        vector<string> res;
        for(auto it: ans){
            res.push_back(it.first);
        }
        return res;

    }
};