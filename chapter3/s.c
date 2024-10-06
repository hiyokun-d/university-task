#include <stdio.h>

int main() {
    double L, B, H;
    scanf("%lf %lf %lf", &L, &B, &H);

    double area = (B * H) + (3 * B * L);

    printf("%.3lf\n", area);
    
    return 0;
}