class Solution {
    vector<vector<int>> graph;
    int dfs(int root,vector<bool>& hasApple, int par = -1, int ans = 0){
        for(auto node:graph[root]) if(node!=par) ans += dfs(node,hasApple,root);
        return (!root) ? ans : (hasApple[root] || ans) ? ans + 2 : 0 ;
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        graph.resize(n);
        for(auto it:edges) graph[it[0]].emplace_back(it[1]), graph[it[1]].emplace_back(it[0]);
        return dfs(0,hasApple);
    }
};
