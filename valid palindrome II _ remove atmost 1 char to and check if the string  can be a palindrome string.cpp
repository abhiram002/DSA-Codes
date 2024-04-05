#include <iostream>
using namespace std;

bool ispal1(string s, int L1, int R1); // Function prototype for ispal1

bool ispal(string s, int size) {
    int L, R;
    L = 0;
    R = size - 1;
    while (L <= R) {
        if (s[L] == s[R]) {
            L++;
            R--;
        } else {
            return ispal1(s, L + 1, R) || ispal1(s, L, R - 1);
        }
    }
    return true;
}

bool ispal1(string s, int L1, int R1) {
    while (L1 <= R1) {
        if (s[L1] == s[R1]) {
            L1++;
            R1--;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string s = "aawwaakk";
    if (ispal(s, s.size())) {
        cout << "It's already a palindrome or can be made a palindrome by deleting at most one character.";
    } else {
        cout << "It can't be made a palindrome by deleting at most one character.";
    }
    return 0;
}
