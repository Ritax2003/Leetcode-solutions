class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int res = 0, curr = 0;
        
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0){
                res+=customers[i];
            }
        }
        
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1) curr+=customers[i];
        }
        
        int addi = curr;
        
        for(int i = minutes;i<grumpy.size();i++){
            if(grumpy[i - minutes] == 1) curr -= customers[i-minutes];
            if(grumpy[i]==1) curr+= customers[i];
            addi = max(addi,curr);
        }
        
        return addi+res;
    }
};