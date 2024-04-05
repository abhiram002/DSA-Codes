class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
       if(ans.empty() || intervals[i][0]>ans.back()[1])
           {
             ans.push_back(intervals[i]);
           }
           else{
              ans.back()[1]=max(ans.back()[1],intervals[i][1]);
           }
       
        }
return ans;
    }
};
---------------------------------------full code----------------------------

 #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    for (int i = 0; i < n; i++) {
        if (ans.empty() || intervals[i][0] > ans.back()[1]) {
            ans.push_back(intervals[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> mergedIntervals = merge(intervals);
    for (int i = 0; i < mergedIntervals.size(); i++) {
        cout << "[" << mergedIntervals[i][0] << ", " << mergedIntervals[i][1] << "] ";
    }
    cout << endl;
    return 0;
}