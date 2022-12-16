//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int hopscotch(int n, int m, vector<vector<int>> mat, int ty, int i, int j)
    {
        int ans=0,t=-pow(-1,(j&1));
        vector<vector<int>> dx={{0,-1,0,1,t,t},{0,-2,0,2,-1,-1,1,1,-t,-t,2*t,2*t}};
        vector<vector<int>> dy={{-1,0,1,0,-1,1},{-2,0,2,0,-2,2,-2,2,-1,1,-1,1}};
        for(int k=0;k<6*(ty+1);k++) {
            int x=i+dx[ty][k],y=j+dy[ty][k];
            if(x>=0 && x<n && y>=0 && y<m) {
                ans+=mat[x][y];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>ty>>i>>j;
        
        Solution ob;
        cout<<ob.hopscotch(n, m, mat, ty, i, j)<<"\n";
    }
    return 0;
}
// } Driver Code Ends