class Solution {
public:
    /*int tribonacci(int n) {
        int dp[] = {0,1,1};
        for(int i =3;i<=n;i++){
            dp[i%3]=dp[0]+dp[1]+dp[2];
        }
        return dp[n%3];
    }*/
    int dp[38];
    int f(int n){
        
        if(n<=0) return 0;
        if(n==1 || n==2) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=f(n-1)+f(n-2)+f(n-3);
    }
    int tribonacci(int n){
        memset(dp,-1,sizeof(dp));
        return f(n);
    }
};
