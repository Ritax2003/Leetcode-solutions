class Solution {
public:
    bool detectCapitalUse(string word) {
      int count=0;
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                count++;
            }
        }
        if(count==word.length() || count==0) return true;//case 1. "USA" , 2. "leetcode"
        if(count==1 && isupper(word[0])) return true;//case 3. "Google"
        else return false;  
    }
};
