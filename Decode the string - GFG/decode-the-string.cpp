//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int i=0;
    string decodedString(string s){
        int num=0;
        string str;
        while(s[i]>='0' && s[i]<='9'){
            num = num*10 + (s[i]-'0');
            i++;
        }
        i++;
        while(s[i]!=']'){
        if(s[i]>='a' && s[i]<='z'){
            str.push_back(s[i]);
            i++;
        }else{
            str += decodedString(s);
        }
        }
        i++;
        string temp="";
        for(int i=0;i<num;i++){
            temp+=str;
        }
        if(i!=s.size() && (s[i]>='0' && s[i]<='9'))
        temp += decodedString(s);
        return temp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends