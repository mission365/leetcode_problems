class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans;
        int temp = num;
        while(temp>0) {
            int rem = temp%10;
            ans.push_back(rem);
            temp/=10;
        }
        sort(ans.begin(),ans.end());
        return ans[0]*10+ans[2]+ ans[1]*10+ans[3];
    }
};