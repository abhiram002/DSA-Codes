    int trap(vector<int>& height) {
         int n = height.size();
    if (n <= 2) {
        return 0;  // Not enough blocks to trap water
    }

    vector<int> left_max(n, 0);
    vector<int> right_max(n, 0);

    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }

    right_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(right_max[i + 1], height[i]);
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        res += min(left_max[i], right_max[i]) - height[i];
    }

    return res;
    }