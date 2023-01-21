class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
         
        vector<string> ans;
        int n = s.size();
        // iterate `s` - place 3 dots to have 4 segments 
        // [seg1].[seg2].[seg3].[seg4]
        // 1st dot - we just need to run it 3 times at most
        // e.g. for 255, we can place the first dot at `2.55`, `25.5` or `255.`
        for (int i = 1; i < 4 && i < n; i++) {
            // we place the 2nd dot in a similar way
            for (int j = i + 1; j < i + 4 && j < n; j++) {
                // we place the 3rd dot in a similar way
                for (int k = j + 1; k < j + 4 && k < n; k++) {
                    // now we can separate into 4 segments
                    string seg1 = s.substr(0, i),
                           seg2 = s.substr(i, j - i),
                           seg3 = s.substr(j, k - j), 
                           seg4 = s.substr(k);
                    // for each segment, check if it is valid
                    if (ok(seg1) && ok(seg2) && ok(seg3) && ok(seg4)) {
                        // if so, we build the ip address and push to answer
                        ans.push_back(seg1 + "." + seg2 + "." + seg3 + "." + seg4);
                    }
                }
            }
        }
        return ans;
    }
    
    // check if a given IP address segment is valid
    // 192 -> true
    // 312 -> false
    bool ok(string s) {
        // string length > 3 is not a valid IP address segment
        if (s.size() > 3 || 
            // empty segment is not valid
            s.size() == 0 ||
            // if the first character is 0, we cannot have something like 0x, 0xx
            (s[0] == '0' && s.size() > 1) || 
            // segment is out of range
            stoi(s) > 255
           ) {
            return false;
        }
        return true;
    }
    
};