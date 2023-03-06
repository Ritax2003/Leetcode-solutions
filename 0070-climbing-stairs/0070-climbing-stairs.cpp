class Solution {
public:
    int climbStairs(int n) {
       if(n==1){
           return n;
       }
        int onestep=1;
        int twostep =2;
        for(int i =3;i<=n;i++){
            int third = twostep;
            twostep = twostep+onestep;
            onestep = third;
        }
        return twostep;
    }
};