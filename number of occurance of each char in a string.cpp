#include <iostream>
using namespace std;

void Printfrequency(string str)
{
  int freq[26] = {0};
  for (int i = 0; i < str.length(); i++)
  {
    freq[str[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freq[i] != 0)
    {
      cout << (char)(i + 'a') << freq[i] << " ";
    }
  }
}

int main()
{
  string str = "takeuforward";
  Printfrequency(str);
  return 0;
}