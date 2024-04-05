#include<iostream>
#include<string.h>
using namespace std;
void  capitalize(string s1,int size){


    

 for(int i=0;i<size;i++){

    if(i==0 || i==size-1) {
           s1[i]=toupper(s1[i]);
        //or   s1[0]=toupper(s1[0]);
        // s1[size-1]=toupper(s1[size-1]);
        }

    else if(s1[i] ==' ')   {
      s1[i-1]=toupper(s1[i-1]);
      s1[i+1]=toupper(s1[i+1]);
     }

 }

  for(int k=0;k<size;k++){
    cout<<s1[k];
}
}


int main(){
    string s1= "take u forward is awesome";
    int size = s1.length();
     capitalize(s1,size);

    return 0;
}