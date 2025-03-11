class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        int n = cards.size();
        int leftsum = 0;
        for(int i=0;i<k;i++) leftsum+=cards[i];

        int maxsum = leftsum;
        int rightsum = 0;
        for(int i=0;i<k;i++){
            leftsum-=cards[k-1-i];
            rightsum+=cards[n-1-i];
            maxsum = max(maxsum,leftsum+rightsum);
        }
        return maxsum;
    }
};