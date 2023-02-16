//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	 bool prime(int n)
    {
        for(int i=2;i<=sqrt(n);i++){
            if((n%i)==0) return false;
        }
        return true;
    }
 int NthTerm(int N){
     if(N==1) return 1;
     if(prime(N)) return 0;
     int i=N-1,j=N+1;
     int x ,y,f=0;
     while(i>=2 && j<=100000){
         while(prime(i)==false)  i--;
         if(i>=2) {
             x = i;
             f++;
         }
         while(prime(j)==false) j++;
         if(j<=100000){
             y = j;
             f++;
         }
        if(f==2) break;
     }
     int ans = min((N-x) , (y-N));
     return ans;
 }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends