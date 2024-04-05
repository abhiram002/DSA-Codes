class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count=0;
        unordered_map<int,int>mp;
        
    for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int j=0;j<n;j++){
            if(mp.find(k-arr[j])!=mp.end())
            {
                count+=mp[k-arr[j]];
            }
            if(arr[j]==k-arr[j]){
                count--;
            }
        }
        
return count/2;
    }
};