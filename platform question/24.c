#include <stdio.h>

int maximumWealth(int rows, int cols, int accounts[][105]) {
    int maxWealth = 0;
    for (int i = 0; i < rows; i++) {
        int currentWealth = 0;
        for (int j = 0; j < cols; j++) {
            currentWealth += accounts[i][j];
        }
        if (currentWealth > maxWealth) {
            maxWealth = currentWealth;
        }
    }
    return maxWealth;
}

int main(void) {
    int m, n;
    int accounts[105][105];
    if (scanf("%d %d", &m, &n) != 2) return 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &accounts[i][j]) != 1) return 0;
        }
    }
    printf("%d\n", maximumWealth(m, n, accounts));
    return 0;
}