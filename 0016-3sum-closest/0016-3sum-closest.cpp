class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int res = 100000;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(abs(target-sum) < abs(target-res)) res = sum;

                if (sum < target) left++;
                else right--;
            }   
        }
        return res;
    }
};