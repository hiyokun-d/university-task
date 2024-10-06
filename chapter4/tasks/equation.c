#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    double x1 = (-b + sqrt(d)) / (2*a);
    double x2 = (-b - sqrt(d)) / (2*a);

    if(d >= 0)  printf("x1: %.2f\nx2: %.2f\n", x1, x2);
    else printf("imajiner\n");
    return 0;
}