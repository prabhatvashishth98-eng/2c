#include <stdio.h>

int main()
{
    int n;
    int a[1000];

    int current = 1;
    int maximum = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (current > maximum)
        {
            maximum = current;
        }
    }

    printf("%d\n", maximum);

    return 0;
}