public class Solution {
    public int MaxSubArray(int[] nums) {
        int res = nums[0];
        int maxEnding = nums[0];
        
        for (int i = 1; i < nums.Length; i++) {
            maxEnding = Math.Max(maxEnding + nums[i], nums[i]);
            res = Math.Max(res, maxEnding);
        }
        
        return res;
    }
}