class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.size()-1,j = b.size()-1;
        int sum,carry=0;
        while(i>=0||j>=0){
            sum = carry;
            if(i>=0) sum +=a[i]-'0';
            if(j>=0) sum +=b[j]-'0';
            res+=to_string(sum%2);
            carry= sum/2;
            i--;
            j--;
        }
        if(carry !=0)
            res+='1';
        reverse(res.begin(),res.end());
        return res;
        /*string res="";
        int carry = 0,i = a.size()-1,j = b.size()-1;
        while(i>=0 || j>=0 || carry!=0){
            int m = i<0 ? 0 : a[i--] - '0';
            int n = j<0 ? 0 : b[j--] - '0';
            res += (m+n+carry)%2 + '0';
            carry = (m+n+carry)/2;
        }
        reverse(res.begin(),res.end());
        return res;*/
    }
};