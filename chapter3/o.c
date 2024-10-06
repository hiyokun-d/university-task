#include <stdio.h>

int main()
{
    int numArr[4][2];
    int result;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &numArr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        result = 0;
        result = numArr[i][0] * numArr[i][1];
        printf("%d\n", result);
    }

    return 0;
}