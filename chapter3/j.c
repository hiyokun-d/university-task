#include <stdio.h>

int main()
{
    int a, b;
    double result;
    scanf("%d %d", &a, &b);

    result = (double)b / a * 100;
    printf("%.4f%%\n", result);
    return 0;
}