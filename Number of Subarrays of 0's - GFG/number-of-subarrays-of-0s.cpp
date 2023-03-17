//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr) {
   long ans =0,cnt =0;
   for(int i =0;i<n;i++){
       if(arr[i]==0){
           cnt++;
       }
       else {
           ans += (long)(cnt*(cnt+1))/2; // add number of subarrays of length "count" to the answer.
           cnt = 0;//reset the counter when element other than zero is found.
       }
   }
   if(cnt!=0){
       ans+=((long)(cnt*(cnt+1))/2);
   }
   return ans;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends