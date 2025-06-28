public class Solution {
    public int ThreeSumClosest(int[] nums, int target) {
        int n = nums.Length;
        int res = 100000;
        Array.Sort(nums);
        
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (Math.Abs(target - sum) < Math.Abs(target - res)) {
                    res = sum;
                }
                
                if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return res;
    }
}