//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        int res = 0;

        unordered_set<char> s;

        unordered_map<char, int> m;

        for(int i=0; i<S.length(); i++)

        {

            if(i>=K)

            {

                if(m.size() == K-1) res++;

                if(m[S[i-K]]==1) m.erase(S[i-K]);

                else m[S[i-K]]--;

            }

            m[S[i]]++;

        }

        if(m.size() == K-1) res++;

        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends