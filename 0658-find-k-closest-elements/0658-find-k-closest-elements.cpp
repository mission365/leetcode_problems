class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            v[i] = {abs(arr[i]-x),arr[i]};
        }
        sort(v.begin(),v.end());
        vector<int> ans(k);
        for(int i=0;i<k;i++){
            ans[i] = v[i].second;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};