#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {20, 15, 26, 2, 98, 6};
	map<int, int>mp;
	int temp = 1;
	int brr[n];
	for (int i = 0; i < n; i++) {
		brr[i] = arr[i];
	}
	sort(brr, brr + n);
	for (int i = 0; i < n; i++) {
		
		if (mp[brr[i]] == 0) {
			mp[brr[i]] = i+1;
			
		}
	}
	for (int i = 0; i < n; i++) {
		cout << mp[arr[i]] << " ";
	}

}