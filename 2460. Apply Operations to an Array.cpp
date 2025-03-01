
//Brute force approach
//Time complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            //For making elements as per simulation
            for(int i = 0;i < n-1; i++ )
            {
                if(nums[i]==nums[i+1])
                {
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
            }
            //for getting a new array and rearring elements accordingly in new array
            vector<int>ans(n,0);
            for(int i=0, j=0;i<n;i++)
            {
                if(nums[i]!=0)
                {
                ans[j]=nums[i];
                j++;
                }
            }
            return ans;
        }
    };