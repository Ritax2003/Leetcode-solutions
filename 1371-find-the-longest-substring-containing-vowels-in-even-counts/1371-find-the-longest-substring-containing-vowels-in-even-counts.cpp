class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n =s.length();
        int mask = 0;
        int maxlen = 0;
        vector<int>pos(32,-2); // 32 possible states (2^5 for vowels a, e, i, o, u)
        pos[0]=-1;// Base case: when mask is 0, it means all vowels are even
        for(int i=0;i<n;i++){
            if(s[i]=='a') mask^=1;
            if(s[i]=='e') mask^=2;
            if(s[i]=='i') mask^=4;
            if(s[i]=='o') mask^=8;
            if(s[i]=='u') mask^=16;
            
            if(pos[mask]==-2){//if mask not encountered previously, update it
                pos[mask]=i;
            }
            else{
                maxlen = max(maxlen,i-pos[mask]);
            }
        }
        return maxlen;
    }
};