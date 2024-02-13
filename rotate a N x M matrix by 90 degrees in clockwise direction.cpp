#include <iostream>
using namespace std;

// Function to rotate a N x M matrix by 90 degrees in clockwise direction
void rotateMatrix(int mat[][4], int n, int m)
{
    int new_mat[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            new_mat[j][n - i - 1] = mat[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = new_mat[i][j];
        }
    }
}

// Function to print the matrix
void displayMatrix(int mat[][4], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

/* Driver code */
int main()
{
    // Test Case 1
    int mat[3][4] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
    };

    // Function call
    rotateMatrix(mat, 3, 4);

    // Print rotated matrix
    displayMatrix(mat, 4, 3);

    return 0;
}
