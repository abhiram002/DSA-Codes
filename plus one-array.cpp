class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        bool carry = true; // Assume there's a carry initially
        for (int i = size - 1; i >= 0; i--) {
            if (carry) {
                if (digits[i] == 9) {
                    digits[i] = 0; // Set current digit to 0
                    if (i == 0) {
                        digits.insert(digits.begin(), 1); 
                        carry = false; // No more carry after this
                    }
                } else {
                    digits[i]++; // Increment the digit and stop the loop
                    carry = false; // No more carry after this
                }
            }
        }
        return digits;
    }
};
