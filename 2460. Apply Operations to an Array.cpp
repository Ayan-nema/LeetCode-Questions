
//Brute force approach
//Time complexity: O(2n)
//Space complexity: O(2n)
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
//Better approach
//Time complexity: O(2n)
//Space complexity: O(1)
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
            // Shifting non zero elements to the beginning
            int  nonZeros = 0;
            for ( int i=0;i<n;i++)
            {
                if(nums[i]!=0)
                {
                    nums[nonZeros++]=nums[i];
                }
            }
            //filling rest places with zeros
            while(nonZeros<n)
            nums[nonZeros++]=0;        
            return nums;
        }
    };

//Optimal approach
//Time complexity: O(n)
//Space complexity: O(1)
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            int nonZeros=0;
            //For making elements as per simulation
            for(int i = 0;i < n; i++ )
            //this time we gotta go to the end of array in this pass only
            {
                if( i < n-1 && nums[i]==nums[i+1] && nums[i] != 0)
                {
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
            // Shifting non zero elements to the beginning
            if(nums[i] != 0)
            {
                if(i != nonZeros)
                swap(nums[i],nums[nonZeros]);
                nonZeros++;
            }       
        }
        return nums;
        }
    };
    