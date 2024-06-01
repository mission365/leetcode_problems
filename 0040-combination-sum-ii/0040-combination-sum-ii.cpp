class Solution {
public:
    void findCombination2(int index, int target,vector<int>& a, vector<vector<int>>& ans, vector<int>& ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i= index; i<a.size(); i++){
            if(i>index && a[i]==a[i-1]) continue;
            if(a[i]>target) break;
            ds.push_back(a[i]);
            findCombination2(i+1,target-a[i],a,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination2(0,target, candidates, ans, ds);
        return ans;
    }
};