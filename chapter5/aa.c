#include <stdio.h>

int main()
{

    long long n;
    int dice, sum = 0;

    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dice);
        sum += dice;

        /*
INFO: Ladder located at square number 9 (to 21), 33 (to 42), and 76 (to 92).
Snakes are located  at square number 53 (down to 37), 80 (to 59), and 97 (to 88)
 */

        if (sum > 30000)
        {
            sum = 30000;
        }

        switch (sum)
        {
            // LADDER
        case 9:
            sum = 21;
            break;
        case 33:
            sum = 42;
            break;
        case 76:
            sum = 92;
            break;

            // SNAKES
        case 53:
            sum = 37;
            break;
        case 80:
            sum = 59;
            break;
        case 97:
            sum = 88;
            break;
        }
    }

    printf("%d\n", sum);
    return 0;
}