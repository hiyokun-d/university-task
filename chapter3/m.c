#include <stdio.h>

int main()
{
    int x, y;
    double cards;

    scanf("%d %d", &x, &y);

    cards = (double)x/y * 100;

    printf("%.2f%%\n", cards);
    return 0;
}