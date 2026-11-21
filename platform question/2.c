#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    return r;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;

    for (int day = i; day <= j; day++) {
        int rev = reverseNumber(day);
        int diff = abs(day - rev);

        if (diff % k == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);

    int result = beautifulDays(i, j, k);
    printf("%d\n", result);

    return 0;
}