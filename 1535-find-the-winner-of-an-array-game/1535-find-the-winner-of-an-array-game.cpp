class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k==1) return max(arr[0],arr[1]);
        if(k>=arr.size()) return *max_element(arr.begin(),arr.end());
        int curr_winner = arr[0];
        int wins = 0;
        for(int i=1;i<arr.size();i++){
            if(curr_winner>arr[i]) wins++; // first element wins
            else {
                curr_winner = arr[i]; //element other than first element wins
                wins = 1;
            }
            if(wins == k) return curr_winner;
        }
        
        return curr_winner;
    }
};