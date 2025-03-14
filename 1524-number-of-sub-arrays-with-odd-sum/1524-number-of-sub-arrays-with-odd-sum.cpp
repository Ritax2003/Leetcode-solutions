class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long k = 1e9+7;
        int odd_cnt = 0, even_cnt = 1;
        int sum =0,res=0;
        for(int a:arr){
            sum+=a;
            if(sum%2==1){
                res=(res+even_cnt)%k;
                odd_cnt++;
            }
            else{
                res=(res+odd_cnt)%k;
                even_cnt++;
            }
        }
        return res;
    }
};