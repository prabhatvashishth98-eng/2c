#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to compare two integers
int cmp(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x < y) return -1;
    if (x > y) return 1;

    return 0;
}

// Function to check duplicate elements
bool containsDuplicate(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }

    return false;
}

// Main function
int main() {

    int nums[] = {1, 2, 3, 1};
    int size = 4;

    if (containsDuplicate(nums, size)) {
        printf("true\n");
    } 
    else {
        printf("false\n");
    }

    return 0;
}