class Solution {
public:
    int countpaths(int i,int j,int m , int n, vector<vector<int>> &dp){
        if(i== m-1 and j == n-1) return true;
        if(i >= m or j>=n) return false;
        if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j] =  countpaths(i+1,j,m,n,dp)+countpaths(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp;
        dp.resize(m);  // resize top level vector
        for (int i = 0; i < m; i++){
            dp[i].resize(n);  // resize each of the contained vectors
            for (int j = 0; j < n; j++){
            dp[i][j] = -1;
            }
        }
        return countpaths(0,0,m,n,dp);
    }
};