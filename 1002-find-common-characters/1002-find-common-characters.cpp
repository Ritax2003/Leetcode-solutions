class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>res;
        for(char st='a';st<='z';st++){
            int mincount = INT_MAX;
            for(string s: words){
                int count=0;
                for(char c:s){
                    if(c==st) count++;
                }
                mincount = min(mincount,count);
            }
            
            for(int i=1;i<=mincount;i++){
                string s(1,st);
                res.push_back(s);
            }
        }
        return res;
    }
};