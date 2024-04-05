class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
    
    std::unordered_set<int> unique_elements;
    int maxx = 1;  // Initialize the maximum length to 1.

    // Step 1: Insert unique elements into the set.
    for (int i = 0; i < N; i++) {
        unique_elements.insert(arr[i]);
    }

    // Step 2: Sort the unique elements.
    std::vector<int> sorted_elements(unique_elements.begin(), unique_elements.end());
    std::sort(sorted_elements.begin(), sorted_elements.end());

    // Step 3: Find the length of the longest consecutive subsequence.
    int current_length = 1;
    int longest_length = 1;

    for (int i = 1; i < sorted_elements.size(); i++) {
        if (sorted_elements[i] == sorted_elements[i - 1] + 1) {
            current_length++;
        } else {
            current_length = 1;
        }
        longest_length = std::max(longest_length, current_length);
    }

    // Step 4: Return the length of the longest consecutive subsequence.
    return longest_length;
}

    
};