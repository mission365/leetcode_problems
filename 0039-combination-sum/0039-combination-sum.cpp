class Solution {
public:
    void findCombination(int index, int target, vector<int>& a, vector<vector<int>>& ans, vector<int>& ds){
        if(index == a.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(a[index]<=target){
            ds.push_back(a[index]);
            findCombination(index, target-a[index], a, ans, ds);
            ds.pop_back();
        }
        findCombination(index+1,target, a, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,candidates, ans, ds);
        return ans;
    }
};