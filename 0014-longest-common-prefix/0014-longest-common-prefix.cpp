class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlength = INT_MAX;
        string small;
        for(string s:strs){
            if(s.size() < minlength){
                minlength = s.size();
                small = s;
            }
        }
        
        string ans;
        stack<char>aleph;
        for(int i=0;i<small.size();i++){
            char current = small[i];
            bool allcommon = true;
            for(int k=0;k<strs.size();k++){
                if(strs[k][i]!=current){
                    allcommon = false;
                    break;
                }
            }
                
            if(allcommon) aleph.push(current);
            else break;
         }
        
       while(aleph.size()!=0){
           ans+=aleph.top();
           aleph.pop();
       }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};