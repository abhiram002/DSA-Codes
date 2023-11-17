#include <iostream>
using namespace std;

int main()
{
    //Initializing variables.
    char str[100]="prepinsta";
    int i;
    int freq[256] = {0};
    
    //Calculating frequency of each character.
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
    
    //Printing frequency of each character.
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
           cout<<"The frequency of "<<char(i)<<" is "<<freq[i]<<endl;
        }
    }
    return 0;
}


///////////////////////2nd method//////////////////


#include <iostream>
#include <algorithm>
using namespace std;
 
void countDistinct(char arr[], int n)
{

    sort(arr, arr + n);
 
    // Traverse the sorted array
    for (int i = 0; i < n; i++){
        int count = 1;

        // Move the index ahead whenever
        // you encounter duplicates
        while (i < n - 1 && arr[i] == arr[i + 1]){
            i++;
            count++;
        }
        
        cout << arr[i] << ": " << count << endl;
    }
 
}
 
// Driver program to test above function
int main()
{
    char arr[] = "prepinsta is the best";
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    // send n-1 to remove '\0'
    countDistinct(arr, n-1);
    return 0;
}
