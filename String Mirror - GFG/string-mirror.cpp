//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        int n = str.size();
        string ans = "";
        char temp = str[0];
        ans += str[0];
        
        for(int i=1; i<n; i++){
            if(str[i] != str[0] && temp >= str[i]){
                ans += str[i];
                temp = str[i];
            }else{
                break;
            }
        }
        
        //reversing string and adding to ans string
        string rev = ans;
        reverse(rev.begin(), rev.end());
        ans += rev;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends