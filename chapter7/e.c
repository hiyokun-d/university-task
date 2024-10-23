#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int t; // test case 2
        scanf("%d", &t);

        for (int j = 0; j < t; j++)
        {
            int num;
            scanf("%d", &num);
            count += num;
        }
        printf("Case #%d: %d\n", i + 1, count);
        count = 0;
    }
    return 0;
}