//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        if((A <= C && B <= D) || (B <= C && A <= D)) return 0;
        if(A>C && A>D) return 1+carpetBox(A/2, B, C, D);   
        if(B>C && B>D) return 1+carpetBox(A, B/2, C, D);
        
        return min(1+carpetBox(A/2,B,C,D), 1+carpetBox(A,B/2,C,D));
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends