public class Solution {
    public int LongestAlternatingSubarray(int[] nums, int threshold) {
        int n = nums.Length;
        int ans = 0;

        for(int i = 0; i < n; i++) {
            int count = 0;
            if ((nums[i] % 2 == 0) && (nums[i] <= threshold)) {
                count++; // count of valid nums starting at i
                int j = i + 1;
                while (j < n && (nums[j] % 2 != nums[j-1] % 2) && nums[j] <= threshold) {
                    count++; // find all num matching given condition
                    j++;
                }
            }
            ans = Math.Max(ans, count); // update ans
        }

        return ans;
    }
}