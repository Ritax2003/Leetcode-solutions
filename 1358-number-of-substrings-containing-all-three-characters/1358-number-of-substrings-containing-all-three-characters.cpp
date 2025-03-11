class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int>mp;
        int res = 0;
        int i=0,j=0,n=s.size();
        while(j<n){
            mp[s[j]]++;
            while(mp.size()==3){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                res+=n-j;
                i++;
            }
            j++;
        }
        return res;
    }
};