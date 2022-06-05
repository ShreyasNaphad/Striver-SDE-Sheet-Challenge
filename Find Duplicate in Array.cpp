#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	
     int temp[n]={0};
    for(int i = 0; i<n; i++)
   {
        if(temp[arr[i]]==1)
            return arr[i];
        else
            temp[arr[i]]++;
   }
   
}
