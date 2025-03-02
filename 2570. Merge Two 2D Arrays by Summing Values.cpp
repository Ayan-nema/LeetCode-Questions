#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            map<int,int> merged;
    
            
            for(auto it:nums1)
            {
                merged[it[0]] += it[1];
            }
    
            for(auto it : nums2)
            {
                merged[it[0]] += it [1];
            }
    
            vector<vector<int>> mergedArray;
            for(auto it : merged)
            {
                mergedArray.push_back({it.first,it.second});
            }
            return mergedArray;
    
        }
    };