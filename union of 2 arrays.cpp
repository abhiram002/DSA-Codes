
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

void FindUnion(int arr1[], int arr2[], int n, int m) {
    
  int freq[MAX_SIZE]={0};
  
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
    
    for (int j = 0; j<MAX_SIZE; j++){
   if(freq[j]>0){
    cout<<j<<" ";
   }
    }
}

int main() {
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
 FindUnion(arr1, arr2, n, m);
  
  return 0;
}

