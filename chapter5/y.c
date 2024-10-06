#include <stdio.h>

void printShape(int t, int n, int m)
{
    printf("Case #%d:\n", t + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (
                i == 0 ||
                i == n - 1 ||
                j == 0 ||
                j == m - 1
                )
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    int n[t], m[t];
    // Generate each shape
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n[i], &m[i]);
    }

    for (int i = 0; i < t; i++)
    {  
        printShape(i, n[i], m[i]);
    }

    return 0;
}