class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        unordered_map<int,pair<string,string>>mp;
        for(int i =0;i<indices.size();i++){
            int indx = indices[i];
            string src = sources[i] , tgt = targets[i];
            if(s.substr(indx,src.length()) == src){
                mp[indx] = {src,tgt};
            }
        }

        string res = "";
        int i =0;
        while(i<s.size()){
            if(mp.find(i)!=mp.end()){
                res+=mp[i].second;
                string source = mp[i].first;
                i+=source.length();
            }
            else{
                res+=s[i];
                i++;
            }
        }
        return res;
    }
};