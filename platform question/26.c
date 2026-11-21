#include <stdio.h>

int searchMatrix(int rows, int cols, int matrix[][105], int target) {
    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int val = matrix[mid / cols][mid % cols];
        if (val == target) return 1;
        if (val < target) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}

int main(void) {
    int m, n, target;
    int matrix[105][105];
    if (scanf("%d %d", &m, &n) != 2) return 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) return 0;
        }
    }
    if (scanf("%d", &target) != 1) return 0;

    printf("%s\n", searchMatrix(m, n, matrix, target) ? "true" : "false");
    return 0;
}