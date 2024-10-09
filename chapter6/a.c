#include <stdio.h>

int main()
{
    int n, q; // input 1 and 2
    scanf("%d", &n);

    int numAdd[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numAdd[i]);
    }

    scanf("%d", &q);
    int result[q];
    for (int i = 0; i < q; i++)
    {
        int a1, b2; // a1 until b2
        scanf("%d %d", &a1, &b2);

        int sum = 0;
        a1--;
        b2--;
        for (int j = a1; j <= b2; j++)
        {
            sum += numAdd[j];
        }
        result[i] = sum;
    }


    for(int i = 0; i < q; i++) {
        printf("Case #%d: %d\n", i+1, result[i]);
    }
    return 0;
}