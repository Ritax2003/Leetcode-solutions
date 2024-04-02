class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>sp,tp;
        for(int i =0;i<s.size();i++){
            char chars = s[i];
            char chart = t[i];
            
            if(sp.find(chars)!=sp.end() and sp[chars]!=chart) return false;
            else if (tp.find(chart)!=tp.end() and tp[chart]!=chars) return false;
            
            sp[chars] =chart;
            tp[chart] = chars;
        }
        return true;
    }
};