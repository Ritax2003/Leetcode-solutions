class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string smallest="";
        int small_length = INT_MAX;
        for(string s : strs){
            if(s.size()<small_length){
                smallest=s;
                small_length = s.size();
            }
        }
        string res="";
        for(int i=0;i<smallest.size();i++){
            char curr = smallest[i];
            bool allcommon = true;
            for(string word : strs){
                if(word[i]!=curr){
                    allcommon = false;
                    break;
                }
            }
            if(allcommon==true) res+=curr;
            else break;
        }
        return res;

    }
};