class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i=0; i<nums.size();i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]+nums[j] < target) {
                    sum++;
                }
                else continue;
            }
        }
        return sum;
    }
};