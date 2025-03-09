class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string smallest;
        int smallest_size= INT_MAX;
        for(auto word : strs){
            if(word.size()<smallest_size){
                smallest = word;
                smallest_size= word.size();
            }
        }
        string res="";
        for(int i =0;i<smallest.size();i++){
            char current = smallest[i];
            bool allcommon = true;
            for(auto word : strs){
                if(word[i]!=current){
                    allcommon = false;
                    break;
                }
            }
            if(allcommon==true) res+=current;
        }
        return res;
    }
};