class Solution {
public:
    int n;
    int q;
    bool solve(vector<int>& nums, vector<vector<int>>& queries, int k){
        vector<int> ans(n,0);

        for(int i=0;i<=k;i++){
            int start = queries[i][0];
            int end = queries[i][1];
            int x = queries[i][2];

            ans[start] += x;
            if(end+1<n) ans[end+1] -= x;
        }
        int cumSum = 0;
        for(int i=0;i<n;i++){
            cumSum += ans[i];
            ans[i]=cumSum;

            if(nums[i]-ans[i]>0) return false;
        }
        return true;
    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        n = nums.size();
        q = queries.size();

        auto lambda =[](int x){
            return x==0;
        };

        if(all_of(begin(nums),end(nums), lambda)){
            return 0;
        }

        int l = 0;
        int r = q-1;
        int k = -1;

        while(l<=r){
            int mid = l+(r-l)/2;
            if(solve(nums, queries, mid)){
                k = mid+1;
                r = mid - 1;
            }
            else l = mid+1;
        }
        return k;
    }
};