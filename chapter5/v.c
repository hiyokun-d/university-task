#include <stdio.h>

void printShape(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j || i == n - 1 - j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);

    int n[t];
    // Generate each shape
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < t; i++)
    {
        printShape(n[i]);
    }

    return 0;
}