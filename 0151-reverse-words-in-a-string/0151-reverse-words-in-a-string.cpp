class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string res="";
        string temp="";
        stringstream ss(s);
        while(ss>>temp){
            reverse(temp.begin(),temp.end());
            if(!res.empty()) res+=" ";
            res+=temp;
        }
        return res;
        
    }
};