class Solution {
public:
    int dp(vector<int> & coins ,int index, int amount,vector<vector<int>> &cache) {
        //base case that if we are able to make the full amount then return 0; 
        if(amount == 0) {
            return 0;
        }
        // we have iterated the whole array and unable to make the amount then return INT_MAX
        // to prevent overflow we used INT_MAX -1 since INT_MAX is a huge number
        if(index >= coins.size()) return INT_MAX - 1;
        //memoization step (changing variables are cache and amount) so we memoize on the basis of that
        if(cache[index][amount] != -1) return cache[index][amount];
        //2 cases take and not take 
        int take = INT_MAX - 1, notTake;
        //take can happen when we have amount left to make is more that the current coin denomination 
        if(amount >= coins[index]) {
            //take has 2 subcases take same or not take same 
            int takeSame = 1 + dp(coins, index, amount - coins[index],cache);
            int notTakeSame = dp(coins, index + 1, amount,cache);
            take = min(takeSame, notTakeSame);
        } 
        // not take any coin at all 
        notTake = dp(coins,index + 1,amount,cache);
        //ans is minimum of both take and not take 
        return cache[index][amount] = min(take, notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        //memoization vector
        vector<vector<int>> cache(coins.size() + 1,vector<int>(amount + 1, -1));
        //ans is calculated by dp 
        int ans = dp(coins, 0, amount,cache);
        //if ans is == INT_MAX -1 means we were unable to make coin changes of that amount from available denominations in coins vector 
        if(ans == INT_MAX - 1) {
            return -1;
        }
        //else were able to make change return ans i.e min number of coin 
        return ans;
    }

};