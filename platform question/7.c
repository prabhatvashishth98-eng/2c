#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;  // insertion position
}

int main(void) {
    int n, target;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &target) != 1) {
        return 1;
    }

    int index = searchInsert(nums, n, target);
    printf("%d\n", index);

    return 0;
}