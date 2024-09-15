class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> prefixXOR(arr.size() + 1, 0);

        // Compute prefix XOR
        for(int i = 1; i <= arr.size(); i++) {
            prefixXOR[i] = prefixXOR[i - 1] ^ arr[i - 1];
        }

        vector<int> ans;
        for(auto& query : queries) {
            int left = query[0];
            int right = query[1];
            // XOR of the range [left, right] is prefixXOR[right + 1] ^ prefixXOR[left]
            ans.push_back(prefixXOR[right + 1] ^ prefixXOR[left]);
        }

        return ans;
    }
};
