#include <stdio.h>

int main()
{
    float a, b, c;
    float d; // RESULT

    scanf("%f %f %f", &a, &b, &c);

    d = (a * 0.2) + (b * 0.3) + (c * 0.5);

    printf("%.2f\n", d);
    return 0;
}