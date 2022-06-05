#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    vector<int>vec;
    int i = 0, j = 0;
    while(m>i && n>j)
    {
        if(arr1[i]<=arr2[j])
        {
            vec.push_back(arr1[i]);
            i++;
        }
        else
        {
             vec.push_back(arr2[j]);
              j++;
        }
    }
    if(m>i)
    {
        while(m>i)
        {
            vec.push_back(arr1[i]);
            i++;
        }
    }
    if(n>j)
    {
        while(n>j)
        {
            vec.push_back(arr2[j]);
            j++;
        }
    }
    return vec;
}
