class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>counts(26,0),countt(26,0);
        for(char ch:s){
            counts[ch-'a']++;
        }
         for(char ch:t){
            countt[ch-'a']++;
        }
        
        
        int steps = 0;
        for (int i = 0; i < 26; i++) {
            steps += abs(counts[i] - countt[i]);
        }

        return steps / 2;  
    }
    
};