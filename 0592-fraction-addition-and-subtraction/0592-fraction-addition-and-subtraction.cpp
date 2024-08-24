#include<bits/stdc++.h>
class Solution {
public:
    string fractionAddition(string expression) {
        if (expression[0] != '-') expression = "+" + expression;
        int numerator = 0, denominator = 1; // Initialize result as 0/1
        int n = expression.size();
        int i = 0;
        while (i < n) {
            int sign = 1;
            if (expression[i] == '-') sign = -1;
            i++;
            // Read the numerator
            int num = 0;
            while (i < n && expression[i]!='/') {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            num *= sign;
            
            // Skip the '/' character
            i++;
            
            // Read the denominator
            int denom = 0;
            while (i < n && isdigit(expression[i])) {
                denom = denom * 10 + (expression[i] - '0');
                i++;
            }
            
            // Update for each frac
            numerator = numerator * denom + num * denominator;
            denominator *= denom;
            
            // Simplify the fraction
            int gcd = abs(__gcd(numerator, denominator));
            numerator /= gcd;
            denominator /= gcd;
        }
        
        return to_string(numerator) + "/" + to_string(denominator);
    }
};