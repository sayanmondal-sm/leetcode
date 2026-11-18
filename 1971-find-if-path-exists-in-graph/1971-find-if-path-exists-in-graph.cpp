class Solution {
public:
    bool helper(vector<vector<int>>& adj, int src, int des, vector<bool>& vis) {
        vis[src] = true;

        if(src == des) {
            return true;
        }

        for(int v : adj[src]) {
            if(!vis[v]) {
                if(helper(adj, v, des, vis)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> vis(n, false);

        return helper(adj, source, destination, vis);
    }
};