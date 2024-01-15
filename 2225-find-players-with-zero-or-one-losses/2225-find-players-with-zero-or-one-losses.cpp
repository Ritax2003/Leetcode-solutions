class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_set<int> zeroloss,oneloss, moreloss;
        for(auto match : matches){
            int winner = match[0], loser = match[1];
            //adding winner
            if(zeroloss.find(winner)==zeroloss.end() && moreloss.find(winner)==moreloss.end() && oneloss.find(winner)==oneloss.end()){
                zeroloss.insert(winner);
            }
            //adding loser
            if(zeroloss.find(loser)!=zeroloss.end()){
                zeroloss.erase(loser);
                oneloss.insert(loser);
            }
            else if(oneloss.find(loser)!=oneloss.end()){
                oneloss.erase(loser);
                moreloss.insert(loser);
            }
            else if(moreloss.find(loser)!=moreloss.end()) continue;
            else oneloss.insert(loser);
        }
        
        vector<vector<int>> answer(2, vector<int>());
        answer[0].assign(zeroloss.begin(), zeroloss.end());
        answer[1].assign(oneloss.begin(), oneloss.end());
        
        sort(answer[0].begin(), answer[0].end());
        sort(answer[1].begin(), answer[1].end());

        return answer;
    }
};