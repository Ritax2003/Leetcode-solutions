class Solution {
public:
    int fn(int i,int j, string &s1,string &s2, vector<vector<int>>&dp){
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) dp[i][j]=1+fn(i-1,j-1,s1,s2,dp);
        if(s1[i]!=s2[j]){
            dp[i][j]=max(fn(i-1,j,s1,s2,dp),fn(i,j-1,s1,s2,dp));
            
        }
        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fn(n-1,m-1,text1,text2,dp);
    }
};