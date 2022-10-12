//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          if(w.length() == 1)   return w;
          
          vector<int> ascii(58, 0);
          int cnt = 65;
          for(int i=0;i<58;i++)    ascii[i] = cnt++;
          for(int i=0;i<n;i++)      ascii[x[i]-'A'] = b[i];
         
          int l = 0, r = 0, currMax = 0, max_ = 0;
          string res = "";
          while(r < w.length()){
               currMax += ascii[w[r]-'A'];

               if(currMax > max_)   max_ = currMax, res = w.substr(l, r-l+1);

               if(currMax < 0)      currMax = 0, l = r+1;
               r++;
          }
          
          return res;       
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends