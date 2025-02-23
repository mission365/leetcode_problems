class Solution {
public:

    bool bfs(int n, vector<int> &v,vector<vector<int>> graph, int i){
        v[0]=0;
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:graph[node]){
                if(v[it]==-1){
                    v[it] = !v[node];
                    q.push(it);
                }
                else if(v[it]==v[node]) return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> v(n,-1);

        for(int i=0;i<n;i++){
            if(bfs(n,v,graph,i)==false) return false;
        }
        return true;
    }
};