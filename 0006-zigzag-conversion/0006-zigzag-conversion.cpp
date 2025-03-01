class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <=1) return s;
        int j =0;
        int direction = -1;
        vector<string>v(numRows,"");
        for(int i=0;i<s.length();i++){
            if(j==0 || j==s.length()-1) direction*=-1;
            v[j]+=s[i];
            if(direction==1) j++;
            else j--;

        }
        string res;
        for(auto it : v) res+=it;    
    }
};