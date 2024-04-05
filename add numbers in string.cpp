#include <iostream>

using namespace std;


int solve(string s1, int size){
  int num=0;
 int sum=0;
    for(int i=0;i<size;i++){
      if(s1[i] >='0' && s1[i]<='9'){
           num= num*10 + (s1[i]-'0');  // main part  (s1[i]-'0') because when subtracted through '0' string the whole will convert to INT
      }
      else{
        sum=sum+num;
        num=0;
      }
      
    }
return sum+num;
 
}


int main() {
string s1 = "1abc82";
 int size= s1.size();
cout<<solve(s1,size);
}