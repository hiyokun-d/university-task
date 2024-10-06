#include <stdio.h>
int main()
{
    int degree;
    printf("Input degree");
    if (degree < 80)
        if (degree > 30)
            printf("Hot\n");
        else
            printf("Cool\n");
    return 0;
}