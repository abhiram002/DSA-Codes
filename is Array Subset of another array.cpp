string isSubset(int a1[], int a2[], int n, int m) {
         int* mp = new int[1000000]; // Allocate memory for the dynamic array (size 1000)

    // Initialize the dynamic array
    for (int i = 0; i < 1000000; i++) {
        mp[i] = 0;
    }
    for(int i=0;i<n;i++){
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        mp[a2[i]]--;
        if(mp[a2[i]]<0){
            return "No";
        }
    }
    delete[] mp; 
    return "Yes";
}        //////////////////////////another approach///////////////////


string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1 ,a1+n);
    sort(a2,a2+m);
    int i=0;
    int j=0;
    int count=0;
    while(i<n&&j<m)
    {
        if(a2[j]==a1[i])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if(count==m)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}
/////////////////////////method 3 ////////////////////////////
// C++ program to find whether an array
// is subset of another array
#include <bits/stdc++.h>
 
/* Return 1 if arr2[] is a subset of
arr1[] */
bool isSubset(int arr1[], int arr2[], int m, int n)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
 
        /* If the above inner loop was
        not broken at all then arr2[i]
        is not present in arr1[] */
        if (j == m)
            return 0;
    }
 
    /* If we reach here then all
    elements of arr2[] are present
    in arr1[] */
    return 1;
}
 
// Driver code
int main()
{
    int arr1[] = { 11, 1, 13, 21, 3, 7 };
    int arr2[] = { 11, 3, 7, 1 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    if (isSubset(arr1, arr2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[]");
 
    getchar();
    return 0;
}
