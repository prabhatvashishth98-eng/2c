#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int minRow = 1;
            int maxCol = 1;

            // Check minimum in row
            for (int k = 0; k < c; k++)
            {
                if (a[i][k] < a[i][j])
                {
                    minRow = 0;
                    break;
                }
            }

            // Check maximum in column
            for (int k = 0; k < r; k++)
            {
                if (a[k][j] > a[i][j])
                {
                    maxCol = 0;
                    break;
                }
            }

            if (minRow && maxCol)
            {
                printf("%d %d %d\n", i, j, a[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");

    return 0;
}