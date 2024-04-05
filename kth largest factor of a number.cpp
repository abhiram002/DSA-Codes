// C++ program for the above approach

#include <iostream>
using namespace std;


int KthLargestFactor(int N, int K)
{
	// Check for numbers
	// in the range [N, 1]
	for (int i = N; i > 0; i--) {

		// Check if i is a factor of N
		if (N % i == 0)

			// If Yes, reduce K by 1
			K--;

		// If K is 0, it means
		// i is the required
	
		if (K == 0) {
			return i;
		}
	}

	// When K is more
	// than the factors of N
	return -1;
}


int main()
{
	int N = 20, K = 3;
	cout << KthLargestFactor(N, K);
}

