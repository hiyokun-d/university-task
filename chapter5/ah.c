#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int result[n];
    for (int i = 0; i < n; i++)
    {
        long long num = 0;
        scanf("%lld", &num);

        result[i] = floor(log10(llabs(num))) + 1;;
    }

    for (int i = 0; i < n; i++) {
        printf("Case #%d: %d\n", i + 1, result[i]);
    }
    return 0;
}