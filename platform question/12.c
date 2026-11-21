#include <stdio.h>

// Function to merge two sorted arrays
void merge(int* nums1, int nums1Size, int m,
           int* nums2, int nums2Size, int n) {

    int i = m - 1;          // Last real element in nums1
    int j = n - 1;          // Last element in nums2
    int k = m + n - 1;      // Last position in nums1

    while (j >= 0) {

        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } 
        else {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }
}

// Main function
int main() {

    int nums1[100];
    int nums2[100];

    int m, n;

    printf("Enter number of elements in nums1: ");
    scanf("%d", &m);

    printf("Enter number of elements in nums2: ");
    scanf("%d", &n);

    printf("Enter elements of nums1: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter elements of nums2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    // Fill remaining positions in nums1 with zeros
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }

    merge(nums1, m + n, m, nums2, n, n);

    printf("Merged array: ");

    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }

    printf("\n");

    return 0;
}