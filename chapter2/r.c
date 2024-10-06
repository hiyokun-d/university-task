#include <stdio.h>

int main()
{
    char A[100], B[100], C;
    int D;
    scanf("%s %[^\n] %c %d", A, B, &C, &D);

    printf("Id    : %s\n", A);
    printf("Name  : %s\n", B);
    printf("Class : %c\n", C);
    printf("Num   : %d\n", D);
    return 0;
}