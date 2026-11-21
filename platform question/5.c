#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;  // count of kept elements

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main(void) {
    int n, val;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int nums[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    if (scanf("%d", &val) != 1) {
        return 1;
    }

    int k = removeElement(nums, n, val);

    printf("%d\n", k);
    for (int i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", nums[i]);
    }
    if (k > 0) {
        printf("\n");
    }

    return 0;
}