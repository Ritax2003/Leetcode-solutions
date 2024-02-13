class Solution {
public:
    bool checkpal(string s){
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
        i++;
        j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(string s:words){
            if(checkpal(s)){
                ans = s;
                break;
            }
        }
        
        return ans;
    }
};