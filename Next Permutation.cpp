#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
  int i,j;
    for(i=n-1; i>=1; i--)
    {
        if(permutation[i]>permutation[i-1])
            break;
    }
 
    if(i<=0)
        reverse(permutation.begin(), permutation.end());
    else
    {
        i--;
        for(j=n-1; j>i; j--)
        {
            if(permutation[j]>permutation[i])
                break;
        }
        swap(permutation[i],permutation[j]);
        reverse(permutation.begin()+i+1, permutation.end());
    }
    return permutation;
}
