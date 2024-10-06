#include <stdio.h>

int main()
{
    char string[101] = "";
    int num;

    scanf("%100s", string);
    scanf("%d", &num);

    printf("%s\n", string);
    printf("%d\n", num);
    return 0;
}
