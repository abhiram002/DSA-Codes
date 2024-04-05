#include<iostream>
using namespace std;    
void selectionsort(int arr[],int n)
{
    
     for (int j = 0 ; j < n-1; j++) {
         int min=j;
    for (int i = j+1 ; i < n ; i++) {
        if(arr[i] < arr[min])
        {
            min=i;

        }
}
     swap(arr[j],arr[min]);
     }
}


int main(){

    int arr[5]={1,3,2,22,7};
    
    selectionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}        
