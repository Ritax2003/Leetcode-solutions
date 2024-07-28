class Solution {
public:
    bool isValid(string s) {
        stack<char>cstack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='[') cstack.push(s[i]);
            else if(s[i]==')' or s[i]=='}' or s[i]==']'){
                if(cstack.size()==0) return false;
                else if(s[i]==')' and cstack.top()!='(') return false;
                else if(s[i]=='}' and cstack.top()!='{') return false;
                else if (s[i]==']' and cstack.top()!='[') return false;
                else cstack.pop();
            }
        }
        if(cstack.size()==0) return true;
        return false;
    }
};