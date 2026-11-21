#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    if (nums == NULL || numsSize <= 0) {
        return 0;
    }

    int candidate = nums[0];
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }

        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    int result = majorityElement(nums, n);
    printf("%d\n", result);

    return 0;
}