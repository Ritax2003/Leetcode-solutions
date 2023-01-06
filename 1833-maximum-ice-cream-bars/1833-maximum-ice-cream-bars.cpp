class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n = costs.size();
        for(int i=0;i<n;i++){
            if(costs[i]<=coins){
                coins-=costs[i];//update the coins value
            }
            else return i;//we can't purchase anymore
        }
        return n;//if all icebar can be purchased
    }
};