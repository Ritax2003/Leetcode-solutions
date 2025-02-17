class Solution {
public:
    int countpaths(int i,int j,int m , int n, vector<vector<int>> &dp){
        if(i== m-1 and j == n-1) return true;
        if(i >= m or j>=n) return false;
        if(dp[i][j]!=-1) return dp[i][j];
        int down = countpaths(i+1,j,m,n,dp);
        int right = countpaths(i,j+1,m,n,dp);
        dp[i][j]= down+right;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<vector<int>>dp(m+1, vector<int>(n+1,-1));
       
        return countpaths(0,0,m,n,dp);
    }
};