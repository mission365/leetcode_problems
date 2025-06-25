using System;
using System.Collections.Generic;

public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums) {
        int n = nums.Length;
        IList<IList<int>> ans = new List<IList<int>>();
        Array.Sort(nums);
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int j = i + 1, k = n - 1;
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.Add(new List<int> { nums[i], nums[j], nums[k] });
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                }
            }
        }
        
        return ans;
    }
}
