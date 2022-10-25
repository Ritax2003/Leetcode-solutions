class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
         string sol1="";
        string sol2="";
        for(auto i:word1)
            sol1+=i;
        for(auto i:word2)
            sol2+=i;
        if(sol1==sol2)
            return true;
        else 
            return false;
    }
};