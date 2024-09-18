class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int &num1,int &num2){
           string a = to_string(num1);
           string b = to_string(num2);
            return a+b>b+a;
        });
        
        string ans ="";
        for(auto  n:nums){
            ans+=to_string(n);
        }
        if(ans[0]!='0') return ans;
        return "0";
    }
};