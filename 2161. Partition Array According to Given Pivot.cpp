//Brute force approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
              list<int> less;
              list<int> equal;
              list<int> greater;
              vector<int>ans;
              for(auto it: nums)
              {
                if (it<pivot)
                {less.push_back(it);}
                else if(it>pivot)
                {
                    greater.push_back(it);
                }
                else 
                    equal.push_back(it);
              }
              less.insert(less.end(),equal.begin(),equal.end());
              less.insert(less.end(),greater.begin(),greater.end());
              
              for(int num:less)
              {
                ans.push_back(num);
              }
              return ans;
         }
    };

//Better approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int n=nums.size();
            int numLess=0;
            int numEqual=0;
            for(auto it:nums)
            {
                if (it<pivot)
                numLess++;
                else if(it==pivot)
                numEqual++;
            }
            vector<int> ans(n);
            int less=0;
            int equal=numLess;
            int greater=numLess + numEqual;
            for(int i=0;i<nums.size();i++)
            {
                int num=nums[i];
                if(num<pivot)
                {
                    ans[less]=num;
                    less++;
                }
                else if(num>pivot)
                {
                    ans[greater++]=num;
                }
                else
                {
                    ans[equal++]=num;
                } 
            }
            return ans;
        }
    };

//Optimal approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int n= nums.size();
            int less=0;
            int greater = n-1;
            vector<int> ans(n);
            for(int i=0,j=n-1;i<n;i++,j--)
            {
                if(nums[i]<pivot)
                {
                    ans[less++]=nums[i];
                }
                if(nums[j]>pivot)
                {
                    ans[greater--]=nums[j];
                }
            }
            while(less<=greater)
            {
                ans[less++]=pivot;
            }
            return ans;
        }
    };
    
