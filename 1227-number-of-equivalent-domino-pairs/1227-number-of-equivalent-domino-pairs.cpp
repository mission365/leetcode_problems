class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int,int>, int> mp;
        int count = 0;
        for(auto it: dominoes){
            int x = min(it[0],it[1]);
            int y = max(it[0],it[1]);
            mp[{x,y}]++;
        }
        for(auto it: mp){
            count += it.second * (it.second-1) / 2;
        }
        return count;
    }
};