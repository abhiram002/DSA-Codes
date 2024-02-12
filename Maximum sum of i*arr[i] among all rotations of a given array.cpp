Input: arr[] = {8, 3, 1, 2}
Output: 29
Explanation: Lets look at all the rotations,
{8, 3, 1, 2} = 8*0 + 3*1 + 1*2 + 2*3 = 11
{3, 1, 2, 8} = 3*0 + 1*1 + 2*2 + 8*3 = 29
{1, 2, 8, 3} = 1*0 + 2*1 + 8*2 + 3*3 = 27
{2, 8, 3, 1} = 2*0 + 8*1 + 3*2 + 1*3 = 17

Input: arr[] = {3, 2, 1}
Output: 7
Explanation: Lets look at all the rotations,
{3, 2, 1} = 3*0 + 2*1 + 1*2 = 4
{2, 1, 3} = 2*0 + 1*1 + 3*2 = 7
{1, 3, 2} = 1*0 + 3*1 + 2*2 = 7

/////////////////////////////////////code////////////////////
#include <iostream>
using namespace std;

 void operation(int n,int a[]){
    int last=a[n-1],temp,sum=0,max=0;
    while(a[0]!=last){
        //////////////////
        sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i]*i;
        }
         if(sum>max){
             max=sum;
         }
        /////////
         temp=a[0];
        for(int i=1;i<n;i++){
            a[i-1]=a[i];
        }
        a[n-1]=temp;
        ////////////
    }
    cout<<max;
 }
int main()
{
    int n=4;
    int a[n] = {8,3,1,2};
     operation(n,a);
     return 0;
}

