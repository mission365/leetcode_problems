class Solution {
public:
    vector<vector<int>> directions{{0,1},{1,0},{0,-1},{-1,0}};

    typedef pair<int, pair<int,int>> P;
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size();
        int m = moveTime[0].size();
        vector<vector<int>> result(n,vector<int>(m,INT_MAX));

        priority_queue<P, vector<P>, greater<P>> pq;

        pq.push({0,{0,0}});
        result[0][0]=0;

        while(!pq.empty()){
            int currTime = pq.top().first;
            pair<int,int> cell = pq.top().second;
            int i = cell.first;
            int j = cell.second;

            pq.pop();

            if(i==n-1 && j==m-1){
                return currTime;
            }

            for(auto it:directions){
                int newi = i+it[0];
                int newj = j+it[1];
                if(newi>=0 && newi<n && newj>=0 && newj<m){
                    int xx=(newi+newj)%2==0?2:1;
                    int wait = max(moveTime[newi][newj]-currTime,0);
                    int totalTime = currTime + wait + xx;
                    if(result[newi][newj] > totalTime){
                        result[newi][newj] = totalTime;
                        pq.push({totalTime,{newi,newj}});
                    }
                }
            }
        }
        return -1;
    }
};