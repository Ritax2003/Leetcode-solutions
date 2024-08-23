class Solution {
public:
    string fractionAddition(string expression) {
        if(expression[0]!='-') {
            expression = "+" + expression;
        }
        if(expression.size()<4)    return expression;
        string ans;
        ans.push_back(expression[0]);
        int i=1;
        for(; i<expression.size() && !(expression[i]=='+' || expression[i]=='-'); i++) {
            ans.push_back(expression[i]);
        }
        while(i<expression.size()) {
            
            string n1;
            int j = 1;
            while(j<ans.size() && ans[j]!='/') {
                n1.push_back(ans[j++]);
            }
            j++;
            int num1 = stoi(n1); // first number numerator
            if(ans[0]=='-') {
                num1 = -num1;
            }
            string d1;
            while(j<ans.size()) {
                d1.push_back(ans[j++]);
            }
            int deno1 = stoi(d1); // first number denominator

            // current
            char op = expression[i++]; // operand between 2 numbers
            
            string n2;
            while(i<expression.size() && expression[i]!='/') {
                n2.push_back(expression[i++]);
            } 
            int num2 = stoi(n2); //second number numerator
            i++;
            string d2;
            while(i<expression.size() && expression[i]>='0' && expression[i]<='9') {
                d2.push_back(expression[i++]);
            }
            int deno2 = stoi(d2); // second number denominator

            // calculation
            int lcm = (deno1*deno2) / __gcd(deno1, deno2);
            int numAns = 0;
            if(op=='+') numAns = (lcm/deno1)*num1 + (lcm/deno2)*num2; //plus
            if(op=='-') numAns = (lcm/deno1)*num1 - (lcm/deno2)*num2; //minus
            if(numAns%lcm==0) {
                numAns = numAns/lcm;
                lcm = 1;
            }
            bool negative = numAns<0;
            if(negative) {
                numAns *= -1;
            }
            int katakuti = min(numAns, lcm);
            while(katakuti>0) {
                if(numAns%katakuti==0 && lcm%katakuti==0) {
                    numAns = numAns/katakuti;
                    lcm = lcm/katakuti;
                }
                katakuti--;
            }
            if(negative) {
                numAns *= -1;
            }
            string newAns;
            newAns.push_back((numAns>=0) ? '+' : '-');
            if(numAns<0) {
                numAns *= -1;
            }
            newAns += to_string(numAns) + "/" + to_string(lcm);
            ans = newAns;
        }
        
        if(ans[0]=='+') {
            ans = ans.substr(1);
        }
        return ans;
    }
};