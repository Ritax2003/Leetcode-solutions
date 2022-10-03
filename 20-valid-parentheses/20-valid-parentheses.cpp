class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        int len = s.length();
        for(int i =0;i<len;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                check.push(s[i]);
            }
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(check.empty()==1){
                    return false;
                }
                else if(s[i]==')' && check.top()!='(')
                    return false;
                else if(s[i]=='}' && check.top()!='{')
                    return false;
                else if(s[i]==']' && check.top()!='[')
                    return false;
                else check.pop();
            }
        }
                    if(check.empty()==1){
                        return true;
                    }
                    else return false;
    }
};