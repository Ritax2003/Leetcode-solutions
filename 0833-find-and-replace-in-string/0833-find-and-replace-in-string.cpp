class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        unordered_map<int,pair<string,string>>replacements;
        for(int i=0;i<indices.size();i++){
            int indx = indices[i];
            string src = sources[i], tgt = targets[i];
            if(s.substr(indx,src.size())==src){
                replacements[indx]={src,tgt};
            }
        }

        string res="";
        int i = 0;
        while(i<s.length()){
            if(replacements.find(i)!=replacements.end()){
                res+=replacements[i].second;
                i+=replacements[i].first.length();
            }
            else{
                res+=s[i];
                i++;
            }
        }
        return res;
    }
};