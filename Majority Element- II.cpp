#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int repeat,n=arr.size();
    vector<int>vec;
    unordered_map<int,int>mp;
    for(int i = 0; i<n; i++)
        mp[arr[i]]++;
    for(auto x: mp)
    {
        if(x.second>n/3)
        {
            repeat = x.first;
            vec.push_back(repeat);
        }
    }
  return vec;
}
