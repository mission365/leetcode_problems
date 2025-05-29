class Solution {
public:

    int dfs(int curr, unordered_map<int, vector<int>> &adj, int d, int check){
        if(d<0) return 0;
        int count = 1;
        for(auto &it: adj[curr]){
            if(it != check){
                count += dfs(it, adj, d-1, curr);
            }
        }
        return count;
    }

    vector<int> solveTargetNode(vector<vector<int>>& edges, int d){
        int n = edges.size()+1;
        unordered_map<int, vector<int>> adj;
        for(auto &it: edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> result(n);
            for(int i=0;i<n;i++){
                result[i] = dfs(i, adj, d, -1);
            }
        return result;
    }
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int n = edges1.size()+1;

        vector<int> res1 = solveTargetNode(edges1,k);
        vector<int> res2 = solveTargetNode(edges2,k-1);

        int mx = *max_element(res2.begin(), res2.end());
        
        vector<int> ans;
        for(auto &it: res1){
            ans.push_back(it+mx);
        }
        return ans;

    }
};