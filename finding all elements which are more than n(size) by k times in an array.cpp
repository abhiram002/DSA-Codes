#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> countOccurrence(int arr[], int n, int k) {
    int nbyk = n / k;
    std::unordered_map<int, int> abb;
    std::vector<int> storage;

    for (int i = 0; i < n; i++) {
        abb[arr[i]]++;
    }

    for ( auto entry : abb) {
        if (entry.second >= nbyk) {
            storage.push_back(entry.first);
        }
    }

    return storage;
}

int main() {
    int arr[] = {3, 1, 2, 2, 2, 1, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    std::vector<int> result = countOccurrence(arr, n, k);

    std::cout << "Elements appearing more than.... " << n / k << " times.....: ";
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
