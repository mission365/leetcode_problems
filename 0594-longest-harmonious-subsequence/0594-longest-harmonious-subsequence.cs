using System;
using System.Collections.Generic;

public class Solution {
    public int FindLHS(int[] nums) {
        int n = nums.Length;
        Array.Sort(nums);

        int left = 0, right = 1, res = 0;
        while (right < n) {
            if (nums[right] - nums[left] == 1) {
                res = Math.Max(res, right - left + 1);
            }
            while (nums[right] - nums[left] > 1) {
                left++;
            }
            right++;
        }
        return res;
    }
}
