class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
        int n = s.length();
        int maxsize = 1;
        int start =0;
        int end =0;
        vector<vector<bool>>dp(n,vector<bool>(n,0));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            for(int j=0;j<i;j++){
                if(s[i]==s[j] and(i-j==1 or dp[j+1][i-1])){
                    dp[j][i] = 1;
                    if(i-j+1 > maxsize){
                        start = j;
                        end =i;
                        maxsize = i-j+1;
                    }
                }
            }
        }
        return s.substr(start,end-start+1);
        
    }
};