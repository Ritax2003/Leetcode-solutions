class Solution {
public:
    int checkroman(char s){
        int ans;
        if(s =='I'){ans = 1;}      
        else if(s=='V'){ans = 5;}
        else if(s=='X'){ans = 10;}
        else if(s=='L'){ans = 50;}
        else if(s=='C'){ans = 100;}
        else if(s=='D'){ans = 500;}
        else if(s=='M'){ans = 1000;}
        
        
        return ans;
    }
    int romanToInt(string s) {
        int len = s.size(),num,sum=0;
        for(int i =0;i<len;){
            if(i == (len-1) || (checkroman(s[i]) >= checkroman(s[i+1]))){
                num = checkroman(s[i]);
                sum = sum + num;
                i++;
            }
            else{
                num = checkroman(s[i+1])-checkroman(s[i]);
                sum = sum + num;
                i = i+2; // we are comparing two consecutive digits,so i =i+2
            }
            
        }
        return sum;
        
    }
};