#include <stdio.h>

int fib_count = 0;

int fibonacci(int n)
{
    fib_count++;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fiboCount(int n)
{
    fib_count = 0;
    fibonacci(n);
    return fib_count;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        printf("Case #%d: %d\n", i + 1, fiboCount(num));
    }
    return 0;
}