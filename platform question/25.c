
#include <stdio.h>

int countNegatives(int rows, int cols, int grid[][105]) {
    int r = 0;
    int c = cols - 1;
    int count = 0;

    while (r < rows && c >= 0) {
        if (grid[r][c] < 0) {
            count += (rows - r);
            c--;
        } else {
            r++;
        }
    }
    return count;
}

int main(void) {
    int m, n;
    int grid[105][105];
    if (scanf("%d %d", &m, &n) != 2) return 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &grid[i][j]) != 1) return 0;
        }
    }
    printf("%d\n", countNegatives(m, n, grid));
    return 0;
}