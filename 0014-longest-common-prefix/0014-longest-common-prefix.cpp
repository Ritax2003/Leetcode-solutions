class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlngth = INT_MAX;
        string small;
        for(string s : strs){
            if(s.size()<minlngth){
                minlngth = s.size();
                small = s;
            }
        }
        
        stack<char>st;
        string ans="";
        for(int i=0;i<small.size();i++){
            char current = small[i];
            bool allcommon = true;
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!= current){
                    allcommon = false;
                    break;
                }
            }
            
            if(allcommon==true){
                st.push(small[i]);
            }
            else{
                break;
            }
        }
        while(st.size()!=0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};