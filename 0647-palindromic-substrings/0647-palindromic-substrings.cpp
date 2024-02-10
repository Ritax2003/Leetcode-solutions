class Solution {
public:
    int countSubstrings(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n = s.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            // odd length palindromes
            int l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                ans++;
                l--, r++;
            }

            // even length palindromes
            l = i, r = i+1;
            while(l >= 0 && r < n && s[l] == s[r]){
                ans++;
                l--, r++;
            }
        }
        return ans;
    }
};