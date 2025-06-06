using System;
using System.Collections.Generic;

public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        HashSet<int> set = new HashSet<int>();
        foreach (int num in nums) {
            set.Add(num);
        }
        return nums.Length != set.Count;
    }
}
