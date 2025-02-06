#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int tupleSameProduct(vector<int>& nums) {
    unordered_map<int, int> productCount;
    int n = nums.size();
    int result = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int product = nums[i] * nums[j];
            if (productCount.find(product) != productCount.end()) {
                result += 8 * productCount[product];
            }
            productCount[product]++;
        }
    }

    return result;
}
