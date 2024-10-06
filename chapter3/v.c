#include <stdio.h>

int main()
{
    int T; // Given that T is always 3
    int celsius;

    scanf("%d", &T);
    float reaumur[T], fahrenheit[T], kelvin[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &celsius);
        reaumur[i] = (4.0 / 5.0) * celsius;
        fahrenheit[i] = (9.0 / 5.0) * celsius + 32;
        kelvin[i] = celsius + 273;
    }

    for (int i = 0; i < T; i++)
    {

        printf("%.2f %.2f %.2f\n", reaumur[i], fahrenheit[i], kelvin[i]);
    }

    return 0;
}