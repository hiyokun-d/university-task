#include <stdio.h>

int main()
{
    int range;
    scanf("%d", &range);
    int num;

    for (int i = 1; i <= range; i++)
    {
        scanf("%d", &num);
        for (int j = 1; j <= num; j++) // print enter
        {
            for (int k = num - j; k > 0; k--) // print spasi
            {
                printf(" ");
            }
            for (int m = j * 2 - 1; m > 0; m--) // print star
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}