class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
         std::sort(arr.begin(), arr.end());
    std::vector<std::vector<int>> pairs;
    int mindiff = INT_MAX;

    for (int i = 1; i < arr.size(); i++) {
        int diff = arr[i] - arr[i - 1];

        if (diff < mindiff) {
            mindiff = diff;
            pairs.clear();
            pairs.push_back({arr[i - 1], arr[i]});
        } else if (diff == mindiff) {
            pairs.push_back({arr[i - 1], arr[i]});
        }
    }

    return pairs;
    }
};