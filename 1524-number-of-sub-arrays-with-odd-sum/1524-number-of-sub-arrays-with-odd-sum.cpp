class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long mod = 1e9+7;
        int odd_count= 0;
        int even_count = 1;
        int sum=0,res=0;
        for(int num: arr){
            sum+=num;

            if(sum%2==1){
                res= (res+even_count)%mod;
                odd_count++;
            }
            else{
                res=(res+odd_count)%mod;
                even_count++;
            }
        }
        return res;
    }
};