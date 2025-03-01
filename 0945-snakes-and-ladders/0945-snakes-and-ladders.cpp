class Solution {
public:
    int getAns(int cell, vector<int> moves){
        vector<bool> vis(cell,0);

        queue<pair<int,int>> q;
        q.push({0,0});

        vis[0] = 1;

        while(!q.empty()){
            int v = q.front().first;
            int dist = q.front().second;

            if(v==cell-1){
                return dist;
            }

            q.pop();

            for(int i=v+1; i<=(v+6) && i<cell; i++){
                if(!vis[i]){
                    vis[i] = 1;
                    int newv, newdist;
                    newdist = dist + 1;

                    if(moves[i] != -1){
                        newv = moves[i];
                    }
                    else newv = i;

                    q.push({newv, newdist});
                }
            }
        }
        return -1;
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int cell = n*n;
        vector<int> moves(cell,-1);

        bool leftToRight = true;
        int k = 0;

        for(int i = n-1;i>=0;i--){
            if(leftToRight){
                for(int j=0;j<n;j++){
                    if(board[i][j] != -1){
                        moves[k] = board[i][j]-1;
                    }
                    k++;
                }
            }
            else {
                for(int j=n-1;j>=0;j--){
                    if(board[i][j] != -1){
                        moves[k] = board[i][j]-1;
                    }
                    k++;
                }
            }
            leftToRight = !leftToRight;
        }

        return getAns(cell,moves);

    }
};