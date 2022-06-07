#include <bits/stdc++.h> 
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>>mergedIntervals;
    if(intervals.size()==0)
        return mergedIntervals;
    
    sort(intervals.begin(), intervals.end());
    vector<int>temp = intervals[0];
    for(auto x: intervals)
    {
        if(x[0]<=temp[1])
            temp[1] = max(temp[1],x[1]);
        else{
            mergedIntervals.push_back(temp);
            temp = x;
            }
      }
     mergedIntervals.push_back(temp);
    return mergedIntervals;
    
}
