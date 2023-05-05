//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool f(int ind,int k,int target,vector<int> &coins,vector<vector<vector<int>>> &dp){
        if(target==0) return k==0;
        if(k==0) return false;
        if(ind==0) return target%coins[ind]==0&&(target/coins[ind])==k;
        if(dp[ind][k][target]!=-1) return dp[ind][k][target];
        bool take = false;
        if(target>=coins[ind]) take = f(ind,k-1,target-coins[ind],coins,dp);
        if(take) return dp[ind][k][target]=true;
        bool nottake = f(ind-1,k,target,coins,dp);
        return dp[ind][k][target]=nottake;
    }
    bool makeChanges(int n, int k, int target, vector<int> &coins) {
        sort(coins.begin(),coins.end());
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(k+1,vector<int>(target+1,-1)));
        return f(n-1,k,target,coins,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends