class Solution {
public:
    vector<int> generatePrefixSum(vector<int>& a) {
        int n = a.size();
        vector<int> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + a[i];
        return pref;
    }

    int subarraysDivByK(vector<int>& nums, int k) {
        // generate prefix sum
        vector<int> pref = generatePrefixSum(nums);
        // store the modular cnt
        vector<int> m(k);
        // base value
        m[0] = 1;
        // init ans
        int ans = 0;
        // iterate each sum
        for (auto& x : pref) {
            // if x is negative, turn it to positive modular equivalent
            if (x < 0) x = (x % k + k) % k;
            // we need to find pairs such that (pref[j] - pref[i]) % k == 0
            // hence, we look for pref[j] % k == pref[i] % k
            // why ..? 
            // pref[j] = a * k + x
            // pref[i] = b * k + y
            // pref[j] - pref[i] = (a * k + x) - (b * k + y)
            // pref[j] - pref[i] = k * (a - b) + (x - y)
            // -> (pref[j] - pref[i]) % k == 0 if & only if (x - y) == 0
            m[x % k]++;
        }
        // n choose 2
        for (auto& x : m) ans += x * (x - 1) / 2;
        return ans;
    }
};