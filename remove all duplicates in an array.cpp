////////////////////brute force///////////////
#include <bits/stdc++.h>

using namespace std;

class removeDuplicate {

  public:

    void duplicate(int arr[], int n) {
     
      for (int i = 0; i < n; i++) {

          for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {

              arr[j] = 0;
            
          }
        }
      }

      for (int i = 0; i < n; i++) {
        if (arr[i]>0) {
          cout << arr[i] << ",";
        }
      }
    }

};
int main() {

  int arr[] = {4, 3,7,10, 9, 2, 4, 1, 10, 89, 34} ;
  int n = 11;

  removeDuplicate d1;
  d1.duplicate(arr, n);

  return 0;
}
///////////////////optimized///////////////////
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}