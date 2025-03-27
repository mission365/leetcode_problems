class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size()-1;
        int maxans = INT_MIN;
        while(lp<rp){
            int w = rp-lp;
            int h = min(height[lp],height[rp]);
            int curr = w*h;
            if(height[lp]<height[rp])lp++;
            else rp--;
            maxans = max(maxans,curr);
        }
        return maxans;
    }
};