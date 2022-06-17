int longestSubSeg(vector<int> &arr , int n, int k){
    int count = 0, left = 0, window = 0;
    for(int right = 0; right<n; right++)
    {
        if(arr[right]==0)
            count++;
        while(count>k)
        {
            if(arr[left]==0)
                count--;
            left++;
        }
        
        if(right-left+1>window)
            window = right-left+1;
                
    }
      return window;
}
