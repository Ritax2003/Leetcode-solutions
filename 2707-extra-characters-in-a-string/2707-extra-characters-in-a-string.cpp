class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        unordered_set<string> dict(dictionary.begin(), dictionary.end());  // Convert vector to set for fast lookup
        
        vector<int> dp(n + 1, n);  // dp[i] represents the minimum extra characters to consider for substring s[i:]
        dp[n] = 0;  // No extra characters when considering an empty substring
        
        // Traverse the string from the end to the start
        for (int i = n - 1; i >= 0; --i) {
            // Try every substring starting from index i
            string current = "";
            for (int j = i; j < n; ++j) {
                current += s[j];
                // If the current substring exists in the dictionary, skip it
                if (dict.count(current)) {
                    dp[i] = min(dp[i], dp[j + 1]);
                }
            }
            // If no valid word is found, count this character as extra
            dp[i] = min(dp[i], 1 + dp[i + 1]);
        }
        
        return dp[0];  // Minimum extra characters starting from index 0
    }
};