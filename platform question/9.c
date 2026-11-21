#include <stdio.h>

int findNumbers(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        if (n < 0) {
            n = -n;
        }

        int digits = 0;
        if (n == 0) {
            digits = 1;
        } else {
            while (n > 0) {
                digits++;
                n /= 10;
            }
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    int result = findNumbers(nums, n);
    printf("%d\n", result);

    return 0;
}