class Solution {
private:
    int dfs(vector<int> &nums, int index, int curr_xor){
        if(index == nums.size()) return curr_xor;
        int include = dfs(nums, index+1, curr_xor^nums[index]);
        int exclude = dfs(nums,index+1, curr_xor);
        return include + exclude;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums,0,0);
    }
};