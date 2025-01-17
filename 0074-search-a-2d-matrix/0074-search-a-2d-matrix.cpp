class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> v;
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                v.push_back(matrix[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int low =0;
        int high = v.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(v[mid]==target) return true;
            else if(v[mid]< target) low = mid+1;
            else high = mid-1; 
        }
        return false;
    }
};