class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>res;
        for(char c= 'a' ; c <= 'z' ;c++){
            int min_count = INT_MAX;
            
            for(string word : words){
                int count = 0;
                for (char ch : word){
                    if (c == ch) count++; 
                }
                min_count = min(min_count, count);
            }
            
            for(int i =0;i < min_count;i++){
                string s(1,c);
                res.push_back(s);
            }
        }
        
        return res;
    }
};