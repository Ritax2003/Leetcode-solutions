//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
/*
T.C - O(N1+N2+N3), S.C - O(1)

 

Intution -
If we look at the problem, we can see that there are 2 cases -
When the sum of all 3 arrays are already equal. This case is easy and anyone can handle that.
When the sum of some elements of the 3 arrays are equal. Lets understand this case in detail -
First of all, let's forget that we have to treat the given arrays as stacks, otherwise, that would complicate things a little bit.
If we look carefully, we can see that it is not possible to insert any elements to the array as we're only allowed to remove them.
This gives us a hint that we cannot increase the sum of arrays but we can only reduce it. For example -

Array 1 - [1,2,3]  => sum = 6
Array 2 - [4,5] => sum = 9
Array 3 - [2,3] => sum = 5

We can see that, we cannot make the sum of Array 3 or Array 1 equal to sum of Array 2 as we're not allowed to insert elements, but only remove them. To do that, we can remove 1 element from Array1 and 1 Element from Array 2 to make sum of all Arrays equal to 5.
This brings us to the question, how can we decide which elements to remove ? That's easy, we already have sum of all 3 arrays that we used to check the first case, We can use that sum again.
If the sum of any array is greater than the minimum sum of the arrays, then we substract the top element of that array from the sum of that array.
At each step, we can update the minimum sum of all the 3 arrays.
*/
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1=0,sum2=0,sum3=0;
        for(int i : S1) sum1+= i;
        for(int i : S2) sum2+= i;
        for(int i : S3) sum3+= i;

        int min2 = min(sum1,min(sum2,sum3));
        int i=0,j=0,k=0;

        while(i<=N1 && j<=N2 && k<=N3)
        {
            if(sum1>min2) sum1-= S1[i++];
            if(sum2>min2) sum2-= S2[j++];
            if(sum3>min2) sum3-= S3[k++];
            if(sum1==sum2 && sum2==sum3)
                return sum1;
            min2 = min(sum1,min(sum2,sum3));
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends