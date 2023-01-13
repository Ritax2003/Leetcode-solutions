class Solution {
public:
    int result;
    int dfs(unordered_map<int,vector<int>>&adj,int curr,int parent,string &s){
        int longest =0, second_longest=0;
        for(int &child:adj[curr]){
            if(child==parent)
                continue;
            int child_longest_length=dfs(adj,child,curr,s);
            if(s[child]==s[curr])
                continue;
            if(child_longest_length>second_longest)
                second_longest = child_longest_length;
            
            if(second_longest>longest)
                swap(longest,second_longest);
        }
        int best = max(longest,second_longest)+1;
        int only_root_best = 1;
        int answer_at_bottom = 1+longest+second_longest;
        
        result = max({result,best,only_root_best,answer_at_bottom});
        
        return max(best,only_root_best);
    }
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        unordered_map<int,vector<int>>adj;
        result=0;
        for(int i =0;i<n;i++){
            int u =i;
            int v = parent[i];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(adj,0,-1,s);
        return result;
    }
};