////////////////brute force///////////////

   // where N is the length of the array.

long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxSum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            long long curSum = 0;
            
            for(int k=i; k<=j; k++)
            {
                curSum += arr[k];
            }

            maxSum = max(maxSum, curSum);
        }
    }
    return maxSum;
}
//another brute force/////
#include<iostream>

using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0];
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += arr[j];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubArraySum(arr, n);
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}
////////////////////////////////////////////
///////////////////////////////////////////////
////////////////// OPtimal oproach ////////////////
/////////////////////////////////////////////

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        long long maxi =INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++){
         sum=sum+arr[i];
         
         if(sum>maxi){
             maxi=sum;
         }
         
         if(sum<0){
             sum=0;
         }
        }
        return maxi;
        
    }
};