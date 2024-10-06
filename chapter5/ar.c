#include <stdio.h>

int main()
{
    int jumlahTri, alas, tempAlas;
    scanf("%d %d", &jumlahTri, &alas);
    tempAlas = alas;

    for (int m = 0; m < jumlahTri; m++)
    {
        for (int i = 1; i <= alas; i++)
        {
            for (int j = alas - i; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = i; k > 0; k--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}