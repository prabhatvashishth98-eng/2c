#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int pos = 0;  // next slot for a non-zero value

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[pos];
            nums[pos] = nums[i];
            nums[i] = temp;
            pos++;
        }
    }
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", nums[i]);
    }
    printf("\n");

    return 0;
}