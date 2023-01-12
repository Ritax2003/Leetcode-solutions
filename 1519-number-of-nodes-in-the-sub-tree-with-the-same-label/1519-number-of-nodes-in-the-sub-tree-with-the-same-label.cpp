class Solution {
public:
   vector<int> dfs(int s,vector<vector<int>>& adj,vector<bool>& visited,string& labs,vector<int>& ans){
    visited[s]=true;
    vector<int>freq(26,0);//node frequency table
    for(auto child:adj[s]){
        if(!visited[child]){
            freq[labs[child]-'a']++;//children appearance
            vector<int>get;
            get=dfs(child,adj,visited,labs,ans);//receive child freq table
            for(int i=0;i<26;i++)freq[i]+=get[i];//combine tables
        }
    }
    
    ans[s]=freq[labs[s]-'a'] + 1;// +1 for its own appearance
    return freq;//return freq table to parent
}
vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
    vector<vector<int>>adj(n);
    vector<bool>visited(n);
    vector<int>ans(n);
    
    for(int i=0;i<n-1;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    dfs(0,adj,visited,labels,ans);
    return ans;
}
};