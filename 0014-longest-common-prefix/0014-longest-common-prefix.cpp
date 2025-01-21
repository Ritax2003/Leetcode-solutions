class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string small ;
        int slength = INT_MAX;
        for(string s : strs){
            if(s.size() < slength){
                small = s;
                slength = s.size();
            }
        }

        stack<char>sp;
        
        for(int i =0;i<small.size();i++){
            char curr = small[i];
            bool allcommon = true;
            for(string s : strs){
                if(s[i]!=curr){
                    allcommon = false;
                    break;
                }
            }
            if(allcommon) sp.push(curr);
            else break;
        }

        string ans;
        while(sp.size()!=0){
            ans+=sp.top();
            sp.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};