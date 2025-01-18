class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int,int>> v(n);
        for(int i=0;i<arr.size();i++){
            v[i] = {arr[i],i};
        }
        sort(v.begin(),v.end());
        return v[n-1].second;
    }
};