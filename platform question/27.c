#include <stdio.h>

void setZeroes(int rows, int cols, int matrix[][105]) {
    int zeroRow[105] = {0};
    int zeroCol[105] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroRow[i] = 1;
                zeroCol[j] = 1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (zeroRow[i] || zeroCol[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main(void) {
    int m, n;
    int matrix[105][105];
    if (scanf("%d %d", &m, &n) != 2) return 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) return 0;
        }
    }

    setZeroes(m, n, matrix);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) printf(" ");
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}