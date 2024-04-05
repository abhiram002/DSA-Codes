#include <stdio.h>
void runningSum(int nums[], int size) {
    for (int i = 1; i < size; i++) {
        nums[i] += nums[i - 1];
    }
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    runningSum(nums, size);

    printf("\nRunning sum array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}