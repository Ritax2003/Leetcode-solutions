class Solution {
public:
    string toHex(int num) {
        if(!num) return "0";
        unsigned int n = num ; //unsigned int makes the number 2' complement automaticaly
        string res ;
        string hex="0123456789abcdef";

        while(n){
            int rem = n%16;
            res= res+ hex[rem];
            n/=16;
        }
        reverse(res.begin(),res.end());
        return res;

    }
};