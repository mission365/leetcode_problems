class Solution {
public:

    int x[4] = {0, 0, -1, 1};
    int y[4] = {1, -1, 0, 0}; 

    void bfs(queue<pair<int,int>> &q, int n, int m, 
    vector<vector<int>> heights, vector<vector<int>> &vis){
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            vis[row][col] = 1;
            for(int i=0;i<4;i++){
                int newrow = row+x[i];
                int newcol = col+y[i];

                if( newrow>=0 && newcol>=0 && newrow<n && newcol<m
                && heights[newrow][newcol] >= heights[row][col]
                && vis[newrow][newcol] == 0 ) {
                    q.push({newrow,newcol});
                    vis[newrow][newcol] = 1;
                }
            }

        }
    }

    vector<vector<int>> solve(int n, int m, vector<vector<int>> heights,vector<vector<int>> &ans){
        queue<pair<int,int>> q1,q2;
        for(int i=0;i<m;i++){
            q1.push({0,i});
            q2.push({n-1,i});
        }
        for(int j=0;j<n-1;j++){
            q1.push({j+1, 0});
            q2.push({j, m-1});
        }

        vector<vector<int>> vis1(n, vector<int> (m, 0));
        vector<vector<int>> vis2(n, vector<int> (m, 0)); 

        bfs(q1,n,m,heights,vis1);

        bfs(q2,n,m,heights, vis2);

        // pair<int,int> val;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis1[i][j] && vis2[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;

    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> ans;
        solve(n,m,heights,ans);
        return ans;
    }
};