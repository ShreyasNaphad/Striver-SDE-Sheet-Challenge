#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int max_count = INT_MIN;
    unordered_set<int>mp;
  
    int left = 0,right;
   for(right = 0; right<input.length(); right++)
   {
       if(mp.find(input[right])!=mp.end())
       {
           while(left<right && mp.find(input[right])!=mp.end())
           {
               mp.erase(input[left]);
               left++;
           }
       }
           mp.insert(input[right]);
           max_count = max(max_count,right-left+1);
       }
         return max_count;   
}
   
