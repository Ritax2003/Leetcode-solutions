class Solution {
public:
    bool checkValidString(string s) {
        stack<int> parentstack, starstack;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') parentstack.push(i);
            else if(s[i]=='*') starstack.push(i);
            else {
                if(parentstack.empty()!=1) parentstack.pop();
                else if(starstack.empty()!=1) starstack.pop();
                else return false;
            }
        }
        
        
        while(parentstack.empty()!=1 && starstack.empty()!=1){
           if(parentstack.top() > starstack.top()) return false;
        parentstack.pop();
        starstack.pop();
            
        }
        
        return parentstack.empty();
            
    }
    
};