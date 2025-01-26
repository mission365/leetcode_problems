class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p =0;
        for(int i=m;i<nums1.size();i++){
            if(n != 0){
                nums1[i] = nums2[p];
                p++;
            }
        }
        sort(nums1.begin(), nums1.end());
    }
};