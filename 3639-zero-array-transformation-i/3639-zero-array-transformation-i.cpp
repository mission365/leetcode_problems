class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ans(n,0);

        for(auto &q : queries){
            int start = q[0];
            int end = q[1];
            int x = 1;
            
            ans[start] += x;
            if(end+1<n){
                ans[end+1] -= x;
            }
        }
        for(int i=1;i<n;i++){
            ans[i] += ans[i-1];
        }
        for(int i=0;i<n;i++){
            if(ans[i]<nums[i]) return false;
        }
        return true;
    }
};