
// reffer only https://youtu.be/Fcc89U4OweQ?si=7YHzsTBTYlMx7G3w
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if the length of result string is equal to the sum of two strings
bool checkLength(const std::string& first, const std::string& second, const std::string& result) {
    return (first.length() + second.length() == result.length());
}

// Function to sort a string
std::string sortString(std::string str) {
    std::sort(str.begin(), str.end());
    return str;
}

// Function to check if a string is a valid shuffle of two other strings
bool shuffleCheck(const std::string& first, const std::string& second, const std::string& result) {
    std::string sortedFirst = sortString(first);
    std::string sortedSecond = sortString(second);
    std::string sortedResult = sortString(result);

    int i = 0, j = 0, k = 0;

      // Loop to check sortedResult against sortedFirst
    while (i < sortedFirst.length() && k < sortedResult.length()) {
        if (sortedFirst[i] == sortedResult[k])
            i++;
        k++;
    }
     k=0;
    // Loop to check sortedResult against sortedSecond
    while (j < sortedSecond.length() && k < sortedResult.length()) {
        if (sortedSecond[j] == sortedResult[k])
            j++;
        k++;
    }

    if (i < sortedFirst.length() || j < sortedSecond.length()) {
        return false;
    }

    return true;
}

int main() {
    std::string first = "XY";
    std::string second = "12";
    std::string results[] = {"1XY2", "Y1X2", "Y21XX"};

    for (string result : results) {
        if (checkLength(first, second, result) && shuffleCheck(first, second, result)) {
            std::cout << result << " is a valid shuffle of " << first << " and " << second << std::endl;
        } else {
            std::cout << result << " is not a valid shuffle of " << first << " and " << second << std::endl;
        }
    }

    return 0;
}

