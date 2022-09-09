class Solution {
public:
    bool isPalindrome(int x) {
      string str = to_string(x);
        int start =0,end = str.length()-1;
        while(start<end){
            if(str[start]!=str[end]){
                return false;
                exit;
            }
            start++;
            end--;
        }
        return true;
    }
};