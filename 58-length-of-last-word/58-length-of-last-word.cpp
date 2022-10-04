class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s =="\0" || s.length()==0) return 0;
        int i = s.length()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        int count =0;
        while(i>=0 && s[i]!=' '){
            i--;
            count++;
        }
        return count;
    }
};