#include<math.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {
     for(int i = -31;i<=31;i++){
         if(pow(2,i)==n){
             return true;
             exit;
         }
     }  
        return false;
    }
};