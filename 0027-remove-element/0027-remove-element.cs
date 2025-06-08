public class Solution {
    public int RemoveElement(int[] nums, int val) {
        int k = 0;  // Pointer to track valid elements
        for(int i = 0; i < nums.Length; i++) {
            if(nums[i] != val) {
                nums[k++] = nums[i];  // Move valid element forward
            }
        }
        return k;  // New length of array
    }
}
