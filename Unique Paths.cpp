#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
    int r = m-1;
    int x = m+n-2;
    double ans = 1;
    
    for(int i = 1; i<=r; i++)
    {
        ans=ans*(x-r+i)/i;
    }
    
    return (int)ans;
}
