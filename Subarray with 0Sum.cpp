int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int count=0;
    unordered_map<int,int>mpp;
    int remove;
    mpp[0]=1;
    int presum=0;
    for(int i=0;i<arr.size();i++){
      presum=presum+arr[i];
      remove =mpp[presum-k];
      count=count+remove;
      mpp[presum]+=1;


    }
    return count;

}