class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string res;
        int n = s.size(),i=0;
        while(i<n){
            while(i<n and s[i]==' ') i++; //skip leading spaces
            int start = i;
            while(i<n and s[i]!=' ') i++;
            
            if(start < i){//there is a non-space word between start and i
                string temp = s.substr(start,i-start);
                reverse(temp.begin(),temp.end());

                if(!res.empty()) res+=" ";
                res+=temp;
            } 
        }   
        return res;      
    }
};