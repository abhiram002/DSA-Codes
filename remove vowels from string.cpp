#include <iostream>
#include <string.h>
using namespace std;
// Function to remove vowels from a string
string RemoveVowels(string str)
{
    int k=0;
    string s1;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
      continue;
    }
    else 
    {
     s1 += str[i];
     
    }
  }
  return s1;
}
int main()
{ 
  string str = "take u forward";
  cout <<"String after removing the vowels\n" <<RemoveVowels(str) << endl;
  return 0;
}