 #include <stdio.h>
#include <stdlib.h>

int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;

    int* reversed = (int*)malloc((size_t)a_count * sizeof(int));
    if (reversed == NULL) {
        return NULL;
    }

    for (int i = 0; i < a_count; i++) {
        reversed[i] = a[a_count - 1 - i];
    }

    return reversed;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int* arr = (int*)malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result_count = 0;
    int* res = reverseArray(n, arr, &result_count);

    if (res != NULL) {
        for (int i = 0; i < result_count; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%d", res[i]);
        }
        printf("\n");
        free(res);
    }

    free(arr);
    return 0;
}