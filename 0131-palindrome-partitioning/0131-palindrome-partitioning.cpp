class Solution {
public:
     bool isP(string s){
        for(int i = 0;i<s.size();i++){
            if(s[i]!=s[s.size()-1-i]){
                return false;
            }
        }
        return true;
    }  
    void printS(vector<vector<string>>&ans,string s,vector<string>& a){
        if(s.size()==0){
            ans.push_back(a);
            return;
        }
        for(int i= 0;i<s.size();i++){
            string qpr= s.substr(0,i+1);
            string ros = s.substr(i+1);
            if(isP(qpr)){
                a.push_back(qpr);
                printS(ans,ros,a);
                a.pop_back();
            }
        }
    } 
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>a;
        printS(ans,s,a);
        return ans;
    }
};