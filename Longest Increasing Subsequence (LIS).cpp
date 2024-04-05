
#include <iostream>
#include <vector>

using namespace std;

int longestIncreasingSubsequence(vector<int>& nums) {
    int n = nums.size();
    vector<int> lis(n, 1); // Initialize LIS values for all elements as 1

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    int maxLIS = 0;
    for (int i = 0; i < n; i++) {
        maxLIS = max(maxLIS, lis[i]); // Find the maximum LIS value
    }

    return maxLIS;
}

int main() {
    vector<int> nums = {8,10,9,2,5,3,7,101,18};

    int lis = longestIncreasingSubsequence(nums);

    cout << "Length of Longest Increasing Subsequence: " << lis << endl;

    return 0;
}