#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    int num1, num2;
    int numArry[2];

    for (int i = 0; i < 3; i++)
    {
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d + %d =", &num1, &num2);
        numArry[i] = num1 + num2;
        // printf("%d %d %d\n", num1, num2, numArry[i]);
        // getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", numArry[i]);
    }

    return 0;
}