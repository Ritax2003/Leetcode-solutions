class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(auto it:arr){
            sum+=it;
        }
        if(sum%3!=0) return false;
        sum/=3;
        int count=0;
        int sub_sum=0;
        for(int i=0;i<arr.size();i++){
            sub_sum+=arr[i];
            if(sub_sum==sum){
                count++;
                sub_sum=0;
            }
        }
        if(count>=3) return true;
        return false;
    }
};