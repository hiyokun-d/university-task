#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    double y;
    double result;

    scanf("%d %lf", &x, &y);

    y = y / 100.0;


    result = x * pow(1 + y, 3);


    result = round(result * 100) / 100;

    printf("%.2f\n", result);

    return 0;
}