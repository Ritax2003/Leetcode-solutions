//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void solve(string st, vector<string> &ans, int index){
        if(index >= st.length()){
            ans.push_back(st);
            return;
        }
        
        for(int i=index; i<st.length(); i++){
            swap(st[index], st[i]);
            solve(st, ans, index+1);
            
            swap(st[index], st[i]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        string st = S;
        
        solve(S, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends