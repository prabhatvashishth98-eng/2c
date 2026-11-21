#include <stdio.h>

int isPerfectSquare(long long n)
{
    if (n < 0)
        return 0;

    long long left = 0, right = n;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;

        if (mid == 0 || mid <= n / mid)
        {
            if (mid * mid == n)
                return 1;

            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return 0;
}

int main()
{
    long long n;

    scanf("%lld", &n);

    printf("%d\n", isPerfectSquare(n));

    return 0;
}