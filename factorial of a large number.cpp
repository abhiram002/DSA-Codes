class Solution {
public:
    std::vector<int> factorial(int N) {
    std::vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    
    if (N == 1 || N == 0)
        return ans;
    
    for (int i = 2; i <= N; i++) { //loop for 2->N
        for (int j = 0; j < ans.size(); j++) {// loop for adding product into ans vector
            int product = ans[j] * i + carry;
            ans[j] = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
    }
    
    std::reverse(ans.begin(), ans.end());
    return ans;
}
};