#include <stdio.h>

int rectangleArea(int length, int width)
{
    return length * width;
}

int main()
{
    int length, width;

    scanf("%d %d", &length, &width);

    printf("%d\n", rectangleArea(length, width));

    return 0;
}