#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string S) {
        int start = 0;
        int maxLen = 1;

        for (int i = 1; i < S.length(); i++) {
            // Even
            int l = i - 1;
            int r = i;
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }

            // Odd
            l = i - 1;
            r = i + 1;
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxLen) {
                    maxLen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }

        return S.substr(start, maxLen); 
    }
};

int main() {
    Solution solution;
    string input = "abaaabbaam";
    string result = solution.longestPalindrome(input);
    cout << "Longest Palindrome: " << result << endl;
    return 0;
}
