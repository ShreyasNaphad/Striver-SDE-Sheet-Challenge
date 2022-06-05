#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
  int low = 0, current = 0, highest = n-1;
    for(int i = 0; i<n; i++)
    {
        if(arr[current]==0)
            swap(arr[low++],arr[current++]);
        else if(arr[current]==1)
            current++;
        else
            swap(arr[current],arr[highest--]);
    }
}
