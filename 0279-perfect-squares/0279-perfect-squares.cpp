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
        dp[n]=res;
        return dp[n];
    }
    int numSquares(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>dp(n+1,-1);
        return check(n,dp);
    }
};