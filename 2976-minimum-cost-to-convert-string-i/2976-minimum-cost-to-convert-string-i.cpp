class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        long long ans = 0;
        vector<vector<long long>>dist (26,vector<long long>(26,LLONG_MAX));
        // Initialize the cost of direct transformations
        for(int i =0;i<original.size();i++){
            dist[original[i]-'a'][changed[i]-'a'] = min(dist[original[i]-'a'][changed[i]-'a'], (long long)cost[i]);
        }
        //converting one alphabet to same costs zero
        for(int i=0;i<26;i++){
            dist[i][i]=0;
        }
        //floydd warshall
        for(int k = 0;k<26;k++){
            for(int i =0;i<26;i++){
                for(int j =0;j<26;j++){
                    if (dist[i][k] < LLONG_MAX && dist[k][j] < LLONG_MAX) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
        
        for(int i =0;i<source.size();i++){
            int src = source[i]-'a';
            int tgt = target[i]-'a';
            if (dist[src][tgt] == LLONG_MAX) {
                return -1; // If there is no valid transformation, return -1
            }
            ans += dist[src][tgt];
        }
        return ans;
    }
};