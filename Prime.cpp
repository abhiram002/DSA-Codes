#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  // for(i = 2; i <= sqrt(n) ; i++) checking half or checking till sqrt is enough 
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}  