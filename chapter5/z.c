#include <stdio.h>

int main()
{

    long long n;
    int dice, square = 0;

    scanf("%lld", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dice);
        square += dice;

        /*
INFO:
“Go-to-Jail” square (on 30th square), she directly moved to “Jail”
square (on 10th square).

Whenever she stops at 12th square, she will
go directly to 28th square

when she stops at 35th square, she will go directly to 7th
square

Start always in square number 0, and every
corner of the board always multiple of 10 (0,10,20,30).
 */

        if (square >= 40)
        {
            square -= 40;
        }
        
        //! I DON'T KNOW WHAT'S WRONG WITH SWICTH CASE
        // switch (square)
        // {
        // case 30:
        //     square = 10;
        //     break;
        // case 12:
        //     square = 28;
        //     break;
        // case 35:
        //     square = 7;
        //     break;
        // }

        //? SUGGEST BY GPT
        // Handling special cases
        if (square == 30)
        {
            square = 10; // Go to Jail square
        }
        else if (square == 12)
        {
            square = 28; // Special square 12 goes to 28
        }
        else if (square == 35)
        {
            square = 7; // Special square 35 goes to 7
        }
    }

    printf("%d\n", square);
    return 0;
}