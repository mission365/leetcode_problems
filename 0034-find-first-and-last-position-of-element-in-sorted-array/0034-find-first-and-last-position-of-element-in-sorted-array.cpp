class Solution {
public:
    int firstPosition(vector<int> nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int val = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
                val = mid;
                high = mid-1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return val;
    }

    int lastPosition(vector<int> nums, int target){
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int val = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
                val = mid;
                low = mid+1;
            }
            else if(nums[mid] > target){
                high = mid - 1;
               
            }
            else low = mid + 1;
        }
        return val;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0]=firstPosition(nums,target);
        ans[1]=lastPosition(nums,target);
        return ans;
    }
};