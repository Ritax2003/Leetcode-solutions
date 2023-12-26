class Solution {
public:
    void IOHack(){
        ios :: sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    double myPow(double x, int n) {
        long long nn = n;
        if(nn<0) nn = -1*nn;
     double ans = 1.0;
        while(nn!=0){
            if(nn%2 == 0){
                x*=x;
                nn/=2;
            }
            else{
                ans = ans*x;
                nn-=1;
            }
        }
        if(n<0) ans = (double)1.0/(double)ans;
        return ans;
    }
};