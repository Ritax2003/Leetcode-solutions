class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26,INT_MAX); // Store min frequency of each character

        for (string& word : words) {
            vector<int> freq(26, 0);
            for (char ch : word) {
                freq[ch -'a']++; // Count frequency of each character in the word
            }
            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i],freq[i]); // Update min frequency across words
            }
        }

        vector<string> res;
        for (int i = 0; i < 26; i++) {
            while (minFreq[i]-- > 0) {
                res.push_back(string(1, i + 'a')); // Add character to result
            }
        }

        return res;
    }
};