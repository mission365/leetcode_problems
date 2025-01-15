class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int,int>> mp;
        vector<int> first(n);
        for(int i=0;i<n;i++){
            mp.emplace_back(intervals[i][0],i);
        }
        vector<int> ans(n);
        sort(mp.begin(), mp.end());
        for(int i=0;i<n;i++){
            int target = intervals[i][1];
            int low = 0;
            int high = n-1;
            int cnt = -1;
            
            while(low <= high){
                int mid = low + (high-low)/2;
                if(mp[mid].first >= target){
                    cnt = mp[mid].second;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            ans[i] = cnt;
        }
        return ans;
    }

};