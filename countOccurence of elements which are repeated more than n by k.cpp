  int countOccurence(int arr[], int n, int k) {

        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<mp.size();i++) //if instead of mp.size() we use n the 
        {
            if(mp[i]>n/k)           // if(mp[arr[i]]>n/k)
            {
                count++;            //then  count++;  
                                    // mp.erase(arr[i]);
            }
        }
        return count;
    }