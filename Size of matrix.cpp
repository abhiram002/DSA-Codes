#include <iostream>
using namespace std;

int main() {
    // Define a matrix
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {9, 10, 11, 12}
    };

    // Calculate the number of rows and columns
    int rows = sizeof(mat) / sizeof(mat[0]); // Number of rows
    int cols = sizeof(mat[0]) / sizeof(mat[0][0]); // Number of columns

    // Print the number of rows and columns
    cout << "Number of rows: " << rows << endl;
    cout << "Number of columns: " << cols << endl;

    return 0;
}
