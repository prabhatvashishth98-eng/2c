#include <stdio.h>

// Function to rotate the array
void rotateArray(int a[], int n, int d) {

    if (n <= 0)
        return;

    d = d % n;

    // Print array starting from index d
    for (int i = 0; i < n; i++) {
        printf("%d ", a[(i + d) % n]);
    }

    printf("\n");
}

int main() {

    int n, d;
    int a[100000];

    scanf("%d %d", &n, &d);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    rotateArray(a, n, d);

    return 0;
}