public class Solution
{
    public int[] ProductExceptSelf(int[] nums)
    {
        int n = nums.Length;
        
        int[] prefix = new int[n];
        int[] suffix = new int[n];
        
        // Initialize prefix and suffix arrays
        prefix[0] = 1;
        suffix[n - 1] = 1;

        // Calculate the prefix products
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // Calculate the suffix products
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        // Calculate the result by multiplying prefix and suffix arrays
        int[] result = new int[n];
        for (int i = 0; i < n; i++)
        {
            result[i] = prefix[i] * suffix[i];
        }

        return result;
    }
}

