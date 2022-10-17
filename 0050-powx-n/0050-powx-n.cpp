class Solution {
public:
    // for n >= 0
    long double positivePow(double x, int n){
        if(n==0) return 1.0;
        if(n==1) return x;
        if(n%2==0){
            x=x*x;
            return positivePow(x, n/2);
        }else{
            return x * positivePow(x, n-1);
        }}
    // for n < 0
    long double negativePow(double x, int n){
        if(n==0) return 1.0;
        if(n==-1) return double(x); 
        if(n%2==0){
            x=x*x;
            return negativePow(x, n/2);
        }else{
            return x * negativePow(x, n+1);
        }}
    long double myPow(double x, int n) { 
        if(n>=0)
            return positivePow(x, n);
        else{
            x=double(1/x);
            return negativePow(x, n);
        }}
};