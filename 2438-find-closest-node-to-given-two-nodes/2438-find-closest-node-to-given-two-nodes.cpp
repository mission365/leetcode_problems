class Solution {
public:
    void dfs(const vector<int>& edges, int node, vector<int> &dist, vector<bool> &vis){
        vis[node] = true;
        int v = edges[node];
        if(v != -1 && !vis[v]){
            dist[v] = dist[node] + 1;  // safe now because dist[node] is known
            dfs(edges, v, dist, vis);
        }
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();

        vector<int> dist1(n, INT_MAX);
        vector<int> dist2(n, INT_MAX);

        vector<bool> vis1(n, false);
        vector<bool> vis2(n, false);

        dist1[node1] = 0;
        dist2[node2] = 0;

        dfs(edges, node1, dist1, vis1);
        dfs(edges, node2, dist2, vis2);

        int ans = -1;
        int minDistNow = INT_MAX;

        for(int i = 0; i < n; i++) {
            int maxDist = max(dist1[i], dist2[i]);
            if(maxDist < minDistNow) {
                minDistNow = maxDist;
                ans = i;
            }
        }
        return ans;
    }
};
