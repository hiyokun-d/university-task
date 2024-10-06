#include <stdio.h>

int main()
{
    // FORMULA:  text{Surface Area} = 2 times 3.14 times R times (R + H)

    int n;
    scanf("%d", &n);

    double result[n];
    for (int i = 0; i < n; i++)
    {
        int r, h;
        scanf("%d %d", &r, &h);

        result[i] = 2 * 3.14 * r * (r + h);
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("Case #%d: %.2f\n", i + 1, result[i]);
    }
    
    return 0;
}