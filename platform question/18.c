#include <stdio.h>
#include <string.h>

int strStrIndex(const char haystack[], const char needle[]) {
    int n = (int)strlen(haystack);
    int m = (int)strlen(needle);
    if (m == 0) return 0;
    if (m > n) return -1;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == m) return i;
    }
    return -1;
}

int main(void) {
    char haystack[10005], needle[10005];
    if (scanf("%10004s %10004s", haystack, needle) == 2) {
        printf("%d\n", strStrIndex(haystack, needle));
    }
    return 0;
}