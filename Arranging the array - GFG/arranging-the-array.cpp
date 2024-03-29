//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void reverse(int arr[], int l, int r)
    {
        if (l < r) {
            swap(arr[l], arr[r]);
            reverse(arr, ++l, --r);
        }
    }
    void merge(int arr[],int l,int m,int r)
    {
        int i=l;
        int j=m+1;
        while(i<=m and arr[i]<0) i++;
        while(j<=r and arr[j]<0) j++;
        reverse(arr,i,m);
        reverse(arr,m+1,j-1);
        reverse(arr,i,j-1);
    }
    void mergesort(int arr[],int l,int r)
    {
        if(l<r)
        {
            int m=l+(r-l)/2;
            mergesort(arr,l,m);
            mergesort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
    void Rearrange(int arr[], int n)
    {
        mergesort(arr,0,n-1);
    }


};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends