//////////////////////////// method 1 /////////////////////////////
 //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int k=0;
        int arr[n+m];
        for(int i=0;i<n;i++){
        arr[i]=a[i];
            k++;//to get the size of arr[]
        }
        for(int i=0;i<m;i++){
        arr[n+i]=b[i];
            k++;
        }
      
       sort(arr, arr+k);
       
        int count=1;
        for(int i=1;i<k;i++)
        {
            if(arr[i]!=arr[i-1])
            count++;
        }
        return count;
    }

////////////////////////////////   method 2    ////////////////////////////////////

class Solution{
public:
    int doUnion(int a[], int n, int b[], int m) {
        unordered_set<int> unionSet; // Use a hash set to store unique elements
        
        for (int i = 0; i < n; i++) {
            unionSet.insert(a[i]); // Insert elements from the first array
        }
        for (int i = 0; i < m; i++) {
            unionSet.insert(b[i]); // Insert elements from the second array
        }
        
        return unionSet.size(); // Return the size of the hash set
    }
};