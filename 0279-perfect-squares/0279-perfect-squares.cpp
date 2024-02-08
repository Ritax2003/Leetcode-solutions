class Solution {
public:
    
    int check(int n,vector<int>&dp){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int res = INT_MAX;
        for(int i=1;i*i<=n;i++){
            int cnt = 1 + check(n-i*i,dp);
            res = min(res,cnt);
        }
        return dp[n]=res;
    }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return check(n,dp);
    }
};