class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> g(n);
        for (auto x : edges) {
			// x[0] can go to x[1]
            g[x[0]].push_back(x[1]);
			// x[1] can go to x[0]
            g[x[1]].push_back(x[0]);
        }
        // u = currenct vertex
        // p = parent vertex
        function<int(int, int)> dfs = [&] (int u, int p) {
            int res = 0, t = 0;
            for (auto v : g[u]) {
                // if v is not same as p
                if (p ^ v) {
                    // calculate the child time
                    t = dfs(v, u);
                    // if there is an apple in the subtree, we need 2 seconds to collect it and head back
                    // if we are in vertex 1, we need 4 seconds to collect all the apples in 4 & 5 
                    // so if we are in vertex 1, we need 4 seconds to collect the apples in 4 & 5
                    // how does 0 know 1 has collected the apple? check the time, i.e. `t`
                    // if t > 0, it means we got some apples in sub trees
                    if (t > 0 || hasApple[v]) {
                        res += t + 2;
                    }
                }
            }
            return res;
        };
        return dfs(0, -1);
    }
};