class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        vis[sr][sc] = 1;
        q.push({sr,sc});
        int ini = image[sr][sc];
        
        vector<vector<int>> ans = image;

        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            // ans.push_back(image[r][c]);
            ans[r][c] = color;
            for(int i=0;i<4;i++){
                int nrow = r+delrow[i];
                int ncol = c+delcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol] == ini && 
                !vis[nrow][ncol]){
                    // ans[nrow][ncol] = color;
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
        return ans;
    }
};