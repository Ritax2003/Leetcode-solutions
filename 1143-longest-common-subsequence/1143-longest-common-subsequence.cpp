class Solution {
public:
   int f(int i, int j, string& s1, string& s2, vector<vector<int>>& dp) {
        if (i < 0 || j < 0) {    //reached at end of one of the strings.
            return 0;
        }
        
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
        if (s1[i] == s2[j]) {  // when both are correct are equal 
            return dp[i][j] = 1 + f(i - 1, j - 1, s1, s2, dp);  // increment it and call recursion for remaining portion
        }
		// if not equal then
        //remaining part of `s1` and `s2` (`f(i, j-1)`).
		//remaining part of `s1` and `s2` (`f(i-1, j)`).
       dp[i][j] = max(f(i, j - 1, s1, s2, dp), f(i - 1, j, s1, s2, dp));  
       return dp[i][j];
    }

public:
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return f(n - 1, m - 1, s1, s2, dp);
    }
};