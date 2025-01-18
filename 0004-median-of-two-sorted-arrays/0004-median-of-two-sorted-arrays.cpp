class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for(int i=0;i<nums1.size();i++){
            nums.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            nums.push_back(nums2[i]);
        }
        sort(nums.begin(),nums.end());
        double low = 0.0;
        double high = nums.size()-1;
        double mid = low + (high-low)/2;
        if(nums.size() % 2 == 0){
            double middle1 = nums[mid];
            double middle2 = nums[mid+1];
            return (middle1+middle2)/2.0;
        }
        else return nums[mid];
        
    }
};