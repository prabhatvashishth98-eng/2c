#include <stdio.h>
#include <limits.h>

int maxHourglassSum(int arr[6][6]) {
    int maxSum = INT_MIN;
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2]
                    + arr[i + 1][j + 1]
                    + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

int main(void) {
    int arr[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (scanf("%d", &arr[i][j]) != 1) return 0;
        }
    }
    printf("%d\n", maxHourglassSum(arr));
    return 0;
}