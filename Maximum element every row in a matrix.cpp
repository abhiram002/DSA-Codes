#include <iostream>

const int N = 4;

void printArray(int result[], int no_of_rows) {
    for (int i = 0; i < no_of_rows; i++) {
        std::cout << result[i] << "\n";
    }
}

int max_element(int row[], int row_size) {
    int max_val = row[0];
    for (int i = 1; i < row_size; i++) {
        if (row[i] > max_val) {
            max_val = row[i];
        }
    }
    return max_val;
}

int main() {
    int arr[][N] = {{3, 4, 1, 8},
                     {1, 4, 9, 11},
                     {76, 34, 21, 1},
                     {2, 1, 4, 5}};
    int result[4];
    for (int i = 0; i < 4; i++) {
        result[i] = max_element(arr[i], N);
    }
    printArray(result, 4);
    return 0;
}
