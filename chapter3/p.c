/* #include <stdio.h>

int main()
{
    // 75% / 75% * 100;
    int n, p;
    double x[4]; // ORIGINAL PRICE

    for (int i = 0; i < 4; i++)
    {
        scanf("%d  %d", &n, &p);

        x[i] = p / (1 - (n / 100.0));
    }

    for (int i = 0; i < 4; i++)
    {
        printf("$%.2f\n", x[i]);
    }

    return 0;
} */

#include <stdio.h>

int main()
{
    int n, p;
    double x[4]; // ORIGINAL PRICE

    // Input and Calculation Loop
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &n, &p);
        double factor = 1 - (n / 100.0); // Precompute factor
        x[i] = p / factor;
    }

    // Output Results
    for (int i = 0; i < 4; i++)
    {
        printf("$%.2f\n", x[i]);
    }

    return 0;
}