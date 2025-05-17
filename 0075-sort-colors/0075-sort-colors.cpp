class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(auto it: nums){
            if(it==0) cnt0++;
            else if(it==1) cnt1++;
            else cnt2++;
        }
        vector<int> ans;
        for(int i=0;i<cnt0;i++){
            ans.push_back(0);
        }
        for(int i=0;i<cnt1;i++){
            ans.push_back(1);
        }
        for(int i=0;i<cnt2;i++){
            ans.push_back(2);
        }
        nums=ans;
    }
};