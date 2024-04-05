#include <bits/stdc++.h>
using namespace std;

// Function to check if string A
// is a shuffled substring of B
bool isShuffledSubstring(string A, string B) {
    int n = A.length(); // Length of string A
    int m = B.length(); // Length of string B

    // Return false if the length of A is greater than B
    if (n > m) {
        return false;
    } else {
        // Sort string A in ascending order
        sort(A.begin(), A.end());

        // Traverse string B
        for (int i = 0; i < m; i++) {

            // Return false if (i+n-1 >= m) doesn't satisfy,
            // meaning we can't form a substring of A's length
            if (i + n - 1 >= m)
                return false;

            // Initialize a new string 'str'
            string str = "";

            // Copy the characters of string B in 'str'
            // until it has the same length as A
            for (int j = 0; j < n; j++)
                str.push_back(B[i + j]);

            // Sort the string 'str' in ascending order
            sort(str.begin(), str.end());

            // Return true if the sorted 'str' matches the sorted 'A'
            if (str == A)
                return true;
        }
    }
    // If no match is found, return false
    return false;
}

// Driver Code
int main() {
    // Input strings str1 and str2
    string str1 = "geekforgeeks";
    string str2 = "ekegorfkeegsgeek";

    // Function returns true if str1 is a shuffled substring of str2
    bool a = isShuffledSubstring(str1, str2);

    // If str1 is a substring of str2, print "YES"; otherwise, print "NO"
    if (a)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}
