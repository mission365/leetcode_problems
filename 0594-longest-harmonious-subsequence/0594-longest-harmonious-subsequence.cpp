class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int left = 0, right = 1, res = 0;
        while(right<n){
            if(nums[right]-nums[left]==1){
                res = max(res, right-left+1);
            }
            while(nums[right]-nums[left]>1){
                left++;
            }
            right++;
        }
        return res;
    }
};