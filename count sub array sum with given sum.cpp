#include <bits/stdc++.h>
using namespace std;
int main()
{
int arr[] = {10, 2, -2, -20, 10};
int k = -10;
int n = sizeof(arr) / sizeof(arr[0]);
int res = 0;

// Calculate all subarrays
for (int i = 0; i < n; i++)
{
	int sum = 0;
	for (int j = i; j < n; j++)
	{
	// Calculate required sum
	sum += arr[j];
	// Check if sum is equal to required sum
	if (sum == k)
		res++;
	}
}
cout << (res) << endl;
}


//////////////optimal//////////////////

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