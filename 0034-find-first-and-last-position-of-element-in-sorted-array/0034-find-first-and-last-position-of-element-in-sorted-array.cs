using System;
using System.Collections.Generic;

public class Solution
{
    public int FirstPosition(List<int> nums, int target)
    {
        int n = nums.Count;
        int low = 0;
        int high = n - 1;
        int val = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                val = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return val;
    }

    public int LastPosition(List<int> nums, int target)
    {
        int n = nums.Count;
        int low = 0;
        int high = n - 1;
        int val = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                val = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return val;
    }

    public int[] SearchRange(int[] nums, int target)
    {
        List<int> numList = new List<int>(nums);
        int[] ans = new int[2];
        ans[0] = FirstPosition(numList, target);
        ans[1] = LastPosition(numList, target);
        return ans;
    }
}
