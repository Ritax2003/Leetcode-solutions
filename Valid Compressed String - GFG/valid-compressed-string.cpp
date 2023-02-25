//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        int i=0,j=0,sum=0;
        while(j<T.length()){
            if(isalpha(T[j])){
               i+=sum;
               sum=0;
               if(i<S.length() && S[i]==T[j]) {
                   i++;
                   j++;
               }
               else
                return 0;
            }
            else{
                sum=sum*10+(T[j]-'0');
                j++;
            }
        }
        i+=sum;
        if(i==S.length())
            return 1;
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends