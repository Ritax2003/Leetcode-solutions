//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        /*int c=__builtin_popcount(N);
        return c;*/
        
        int count = 0 ;
        
        while(N != 0){
            if((N&1) == 1){
                count++;
            }
            N=N>>1 ;
        }
        return count ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends