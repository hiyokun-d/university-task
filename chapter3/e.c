#include <stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", addition(a, b));
    printf("%d\n", subtraction(a, b));
    printf("%d\n", multiplication(a, b));
    printf("%d\n", division(a, b));
    printf("%d\n", modulus(a, b));
    return 0;
}