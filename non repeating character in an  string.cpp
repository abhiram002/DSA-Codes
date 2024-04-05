#include <bits/stdc++.h>

using namespace std;

    void nonRepeating(string st, int l) {
     
    int freq[200] = {0};

      for (int i = 0; i < l; i++) {
        if (st[i] == ' ') // ignoring the space in the string
          continue;
        else
          freq[st[i] - 'a']++; // incrementing each character's frequency
      }

      // Printing non-repeating characters of the string
      for (int i = 0; i < l; i++) {
        if (freq[st[i] - 'a'] == 1 && st[i] != ' ') {
          cout << st[i] << " ";
        }
      }
    }

int main() {

  string st = "Takeee u foorward";
  int l = st.length();
  
  nonRepeating(st,l);

  return 0;
}