public class Solution {
    public int MinimumDifference(int[] nums, int k) {
        int n = nums.Length;
        Array.Sort(nums);
        if(k==1) return 0;
        int diff = int.MaxValue; int i=0, j=i+k-1;
        while(j<n){
            int res = nums[j]-nums[i];
            if(diff>res) diff = res;
            i++;
            j++;
        }
        return diff;
    }
}