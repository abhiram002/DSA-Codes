#include <iostream>
using namespace std;

int main() {
    string input[3][3] = {{"you", "we"}, {"have", "are"}, {"sleep", "eat", "drink"}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k <3; ++k) {
                cout << input[0][i] << " ";
                cout << input[1][j] << " ";
                cout << input[2][k] << " " << endl;
            }
        }
    }

    return 0;
}
