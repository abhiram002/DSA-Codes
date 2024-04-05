#include <iostream>
using namespace std;
 
int main() {
  string text = "takeuforward";
  string pattern = "forward";
  auto foundIdx = text.find(pattern);
  cout <<"The substring starts from the index: " <<foundIdx << endl;
  return 0;
}