class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int low = 0;
        int high = n-1;
        int ans = 0;
        while(low <= high){
            int mid = low+(high-low)/2;
            int index = n-mid;
            if(citations[mid]>=index){
                ans = index;
                high = mid - 1;
            } 
            else low = mid + 1;
        }
        return ans;
    }
};