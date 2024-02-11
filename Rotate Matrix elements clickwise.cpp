
#include <iostream>
using namespace std;


void rotatematrix(int m, int n, int a[4][4]){
    int row=0,col=0,curr;
    
    
    
    while(row<m && col<n){
        
        int prev=a[row+1][col];
 
       for(int i=col;i<n;i++){
           curr=a[row][i];
           a[row][i]=prev;
           prev=curr;
       }
       row++;
       
       for(int i=row;i<m;i++){
           curr=a[i][n-1];
           a[i][n-1]=prev;
           prev=curr;
       }
       n--;
       
       if(row<m){
       for(int i=n-1;i>=col;i--){
           curr=a[m-1][i];
           a[m-1][i]=prev;
           prev=curr;
       }
       }
       m--;
       
       if(col<n){
       for(int i=m-1;i>=row;i--){
           curr=a[i][col];
           a[i][col]=prev;
           prev=curr;
       }
       }
       col++;
       
    }
    //print
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() 
{ 
   int R=4;
   int C=4;
    int a[4][4] = { {1, 2, 3, 4}, 
                    {5, 6, 7, 8}, 
                    {9, 10, 11, 12}, 
                    {13, 14, 15, 16} }; 
                    
 
   
 rotatematrix(R, C, a); 
    return 0; 
} 
