class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long cnt1 =0, cnt2=0, sum1=0,sum2=0;
        for(auto it: nums1){
            if(it==0) cnt1++;
            sum1+=it;
        }
        for(auto it: nums2){
            if(it==0) cnt2++;
            sum2+=it;
        }
        long min1 = sum1 + cnt1;
        long min2 = sum2 + cnt2;
        if(cnt1==0 and cnt2==0){
            return sum1==sum2 ? sum1 : -1;
        }else if(cnt1== 0){
            return sum2 + cnt2 <= sum1 ? sum1 : -1;
        }
        else if(cnt2 == 0){
            return sum1 + cnt1 <= sum2 ? sum2 : -1;
        }
        return max(min1,min2);
    }
};