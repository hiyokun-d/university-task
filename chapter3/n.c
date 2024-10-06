#include <stdio.h>

int main()
{
    int x, y;
    double result;

    scanf("%d %d", &x, &y);

    result = ((double) (x - y) / x) * 100;

    printf("%.2f%%\n", result);
    return 0;
}