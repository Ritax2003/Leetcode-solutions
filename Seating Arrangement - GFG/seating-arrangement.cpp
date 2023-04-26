//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /* For Each seat if its empty just check the next and previous seat whether its empty (handle the boundary conditions)*/
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
       int c=0;
        for(int i=0;i<m;i++){
            int prev=i-1>=0?seats[i-1]:0;
            int next=i+1<m?seats[i+1]:0;
            if(!seats[i]&&prev==0&&next==0){
                c++;
                seats[i]=1;
            }
        }
        return c>=n;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends