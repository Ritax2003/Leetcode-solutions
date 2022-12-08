//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{
    private :
    vector<bool> seiveOfErathosesis(int n){
        vector<bool>arr(n+1,true);
        arr[0] = arr[1] = false;
        for(int i=2;i*i<=n;i++){
            if(arr[i] == true){
                for(int j = i*i;j<=n;j+=i){
                   arr[j] =false;
                }
            }
        }
        return arr;
    }
public:
    vector<int> threeDivisors(vector<long long> query, int q){
        vector<bool>ans;
        vector<int>banar;
        int c;
        ans = seiveOfErathosesis(1000000);
        for(int i=0;i<query.size();i++){
            c=0;
            long long int x = query[i];
             for(long long j = 2;j*j<=x;j++){
                 if(ans[j] == true)
                         c++;
             }
             banar.push_back(c);
        }
    return banar;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends