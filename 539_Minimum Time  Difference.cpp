class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(auto str: timePoints)
        {
            int min=0;
            min +=stoi(str.substr(0,2)) * 60 ;
            min +=stoi(str.substr(3,2));
            mins.push_back(min);
        }
        sort(mins.begin(),mins.end());
        int other_side=1440-mins[mins.size()-1];
        other_side=(abs(mins[0]+other_side));
        int ans =INT_MAX;
        for(int i=0;i<mins.size()-1;i++)
        {
        ans=min(abs(mins[i]-mins[i+1]),ans);
        }
        ans=min(other_side,ans);
return ans;
    }
};