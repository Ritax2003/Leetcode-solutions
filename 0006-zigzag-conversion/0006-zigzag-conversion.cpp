class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) return s;
        int j=0;
        
        vector<string>v(numRows,"");
        int dir = -1;
        for(int i=0;i<s.length();i++){
            if(j==0||j == numRows-1) dir*=-1;
            v[j]+=s[i];
            if(dir == 1) j++;
            else j--;
        }
         string res;

    for(auto &it : v) res += it; 

    return res;
    }
};