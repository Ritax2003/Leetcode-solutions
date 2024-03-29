//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
            
        vector<int> a(26);
        for(int i=0; i<s.size(); i++)
            a[s[i]-'a']++;
            
        int i=0;
        bool flag= true;
        while(i>=0 && i<s.size())
        {
            if(a[s[i]-'a']>1)
            {
                a[s[i]-'a']--;
                s.erase(i, 1);
                
                if(flag)
                    i= s.size()-1;
                else
                    i=0;
                
                flag= !flag;
                
                continue;
            }
            
            if(flag)
                i++;
            else
                i--;
        }
        if(!flag)
            reverse(s.begin(), s.end());
        return s;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends