class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperLetter = 0;
		// count number of characters with upper case
        for (auto x : word) upperLetter += isupper(x) ? 1 : 0;
            // case 1: All letters in this word are capitals, like "USA".
            // case 2: All letters in this word are not capitals, like "leetcode".
            // case 3: Only the first letter in this word is capital, like "Google"
        return upperLetter == word.size() || upperLetter == 0 ||(upperLetter == 1 && isupper(word.front()));
    }
};