class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlength = INT_MAX;
        string shorts;
        for(string s : strs){
            if(s.size()<minlength){
                shorts =s;
                minlength = s.size();
            }
        }
        
        stack<char>st;
          // Iterate over each character position up to the length of the shortest string
        for (int i = 0; i < minlength; i++) {
            char currentChar = shorts[i];
            bool allMatch = true;

            // Compare the character at position i in all strings
            for (const string& s : strs) {
                if (s[i] != currentChar) {
                    allMatch = false;
                    break;
                }
            }

            if (allMatch) {
                st.push(currentChar);
            } else {
                break;
            }
        }
        string ans="";
        while(st.size()!=0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};