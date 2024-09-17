class Solution {
public:
    vector<string>splitsen(string s){
        vector<string>words;
        string word ="";
        for(char c:s){
            if(c==' ') {
                words.push_back(word);
                word="";
            }
            else{
                word+=c;
            }
            
        }
        if(word!=""){
            words.push_back(word);
        }
        return words;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>v1 = splitsen(s1);
        vector<string>v2 = splitsen(s2);
        unordered_map<string,int>mp;
        for(string s: v1){
            mp[s]++;
        }
        for(string s: v2){
            mp[s]++;
        }
        vector<string> result;
        for (auto& entry : mp) {
            if (entry.second == 1) {
                result.push_back(entry.first);
            }
        }
        
        return result;
    }
};