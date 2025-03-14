class Solution {
public:
    string findReplaceString(string s, vector<int>& indices,
                             vector<string>& sources, vector<string>& targets) {
        // Step 1: Store replacements in a map
        unordered_map<int, pair<string, string>> replacements;

        for (int i = 0; i < indices.size(); i++) {
            int idx = indices[i];
            string src = sources[i], tgt = targets[i];

            // Only store valid replacements (when the source matches)
            if (s.substr(idx, src.length()) == src) {
                // Store the replacement at this index
                replacements[idx] = {src, tgt};
            }
        }

        // Step 2: Construct the final modified string
        string result = "";
        int i = 0;
        while (i < s.length()) {
            // If there's a replacement at this index
            if (replacements.find(i) != replacements.end()) {
                result += replacements[i].second;    // Append target string
                i += replacements[i].first.length(); // Skip over replaced part
            } else {
                result += s[i]; // Otherwise, keep original character
                i++;
            }
        }
        return result;
    }
};