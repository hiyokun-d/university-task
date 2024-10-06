#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    int num1, num2;
    int result;

        fgets(input, sizeof(input), stdin);
        sscanf(input, "%d + %d", &num1, &num2);
        result = num1 + num2;
        // printf("%d %d %d\n", num1, num2, numArry[i]);
        // getchar();

        printf("%d\n", result);

    return 0;
}