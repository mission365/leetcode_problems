class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(k==1) return 0;
        int diff = INT_MAX; int i=0, j=i+k-1;
        while(j<n){
            int res = nums[j]-nums[i];
            if(diff>res) diff = res;
            i++;
            j++;
        }
        return diff;
    }
};