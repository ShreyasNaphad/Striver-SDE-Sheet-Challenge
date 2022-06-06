#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
  
    int count_max = 1,ans=-1;
    unordered_map<int,int>mp;
    for(int i = 0; i<n; i++)
        mp[arr[i]]++;
    for(auto x: mp)
    {
        if(x.second>n/2)
        {
            int number = x.first;
            ans = number;
            int occurrence = x.second;
            count_max = occurrence;
        }
    }   
    return ans;
}
