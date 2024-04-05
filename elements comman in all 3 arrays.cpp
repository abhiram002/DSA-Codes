public:    
    std::vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
    std::vector<int> result;
    
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k]) {
            result.push_back(A[i]);
            i++;
            j++;
            k++;
        } else if (A[i] <= B[j] && A[i] <= C[k]) {
            i++;
        } else if (B[j] <= A[i] && B[j] <= C[k]) {
            j++;
        } else {
            k++;
        }
    }
    
    // Remove duplicates from the result vector
    result.erase(std::unique(result.begin(), result.end()), result.end());
    
    return result;