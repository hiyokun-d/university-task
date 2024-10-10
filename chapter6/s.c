#include <stdio.h>

int addWithoutCarry(int a, int b)
{
    int result = 0, place = 1;

    while (a > 0 || b > 0)
    {
        int digitA = a % 10;
        int digitB = b % 10;
        int sum = (digitA + digitB) % 10;

        result = result + (sum * place);
        place = place * 10;
        a = a / 10;
        b = b / 10;
    }

    return result;
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        int A, B;
        scanf("%d %d", &A, &B);

        int result = addWithoutCarry(A, B);
        printf("Case #%d: %d\n", t, result);
    }

    return 0;
}
