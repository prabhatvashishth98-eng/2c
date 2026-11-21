#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    scanf("%999s", str);

    int len = strlen(str);

    for (int i = 0; i < len;)
    {
        int count = 1;

        while (i + count < len &&
               str[i] == str[i + count])
        {
            count++;
        }

        printf("%c%d", str[i], count);

        i += count;
    }

    printf("\n");

    return 0;
}