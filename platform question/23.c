#include <stdio.h>

int diagonalSum(int n, int mat[][105]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
        sum += mat[i][n - 1 - i];
    }
    if (n % 2 == 1) {
        sum -= mat[n / 2][n / 2];
    }
    return sum;
}

int main(void) {
    int n;
    int mat[105][105];
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &mat[i][j]) != 1) return 0;
        }
    }
    printf("%d\n", diagonalSum(n, mat));
    return 0;
}