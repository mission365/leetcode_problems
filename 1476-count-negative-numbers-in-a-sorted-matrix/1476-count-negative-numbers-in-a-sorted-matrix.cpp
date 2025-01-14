class Solution {
public:

    //approach 1:
    // int countNegatives(vector<vector<int>>& grid) {
    //     int cnt = 0;
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     int row = 0, col = m-1;
    //     while(row<n && col>=0){
    //         if(grid[row][col]<0){
    //             cnt += (n-row);
    //             col--;
    //         }
    //         else row++;
    //     }
    //     return cnt;
    // }

    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            int low = 0; int high = m-1;
            while(low<=high){
                int mid = low+ (high-low)/2;
                if(grid[i][mid]<0){
                    high = mid-1;
                }
                else low = mid+1;
            }
            cnt += (m-low);
        }
        return cnt;
    }
};