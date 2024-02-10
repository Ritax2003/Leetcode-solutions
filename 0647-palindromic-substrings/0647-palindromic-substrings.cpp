class Solution {
public:
    bool checkpal(string s, int l ,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    int countSubstrings(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j =i;j<n;j++){
                if(checkpal(s,i,j)) count++;
            }
            ans+=count;
        }
        return ans;
    }
};