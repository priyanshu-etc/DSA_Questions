
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& weight, int start, int end) {
        // INITIALIZE ADJACENCY LIST
        vector<vector<pair<int, double>>> adj(n);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0], v = edges[i][1];
            double w = -log(weight[i]);
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        // INITIALIZE DIJKSTRA'S
        vector<double> distance(n, INFINITY);
        distance[start] = 0;
        priority_queue<pair<double, int>> pq;
        pq.push({0, start});
        
        // RUN DIJKSTRA'S
        while (!pq.empty()) {
            int a = pq.top().second; pq.pop();
            for (auto [b, w] : adj[a]) {
                if (distance[a]+w < distance[b]) {
                    distance[b] = distance[a]+w;
                    pq.push({-distance[b], b});
                }
            }
        }
        
        if (distance[end] == INFINITY) return 0;
        return exp(-distance[end]);
    }
};
