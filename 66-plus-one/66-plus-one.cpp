class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int indx = digits.size()-1;
        while(indx>=0){
            if(digits[indx]==9){
                digits[indx]=0;
            }
            else{
                digits[indx]+=1;
                return digits;
            }
            indx--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};