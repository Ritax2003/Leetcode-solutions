class Solution {
public:
    int helper(vector<vector<int>>&dp,int i,int j,int m,int n){
        if(i==m-1 and j==n-1) return true;
        if(i>=m or j>=n) return false;
        if(dp[i][j]!=-1) return dp[i][j];
        int right = helper(dp,i+1,j,m,n);
        int down = helper(dp,i,j+1,m,n);
        dp[i][j]=right+down;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return helper(dp,0,0,m,n);
    }
};