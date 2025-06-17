using System;
using System.Collections.Generic;

public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
        int n = numbers.Length;
        int i = 0;
        int j = n - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            } else {
                return new int[] { i + 1, j + 1 };  // 1-based index
            }
        }

        return new int[0];  // Return empty array if no solution
    }
}
