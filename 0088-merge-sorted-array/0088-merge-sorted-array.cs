using System;
using System.Collections.Generic;
public class Solution {
    public void Merge(int[] nums1, int m, int[] nums2, int n) {
        int p = 0;
        for (int i = m; i < nums1.Length; i++) {
            if (n != 0) {
                nums1[i] = nums2[p];
                p++;
            }
        }
        Array.Sort(nums1);
    }
}