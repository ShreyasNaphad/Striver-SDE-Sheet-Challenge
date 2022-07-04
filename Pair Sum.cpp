#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
 
      unordered_map<int,int>mp;
   vector<vector<int>>vec;
    vector<int>ans;
    for(int i = 0; i<arr.size(); i++)
    {
        if(mp.find(s-arr[i])!=mp.end())
        {
            int temp = mp.find(s-arr[i])->second;
            while(temp--)
            {
                ans.push_back(s-arr[i]);
                ans.push_back(arr[i]);
                sort(ans.begin(),ans.end());
                vec.push_back(ans);
                ans.clear();
            }
        }
        mp[arr[i]]++;
    }
    sort(vec.begin(),vec.end());
    return vec;
}
