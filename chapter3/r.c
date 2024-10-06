// #include <stdio.h>

// int main()
// {
//     char expression[50];
//     int A, B, C, D, result[3];
//     for (int i = 0; i < 3; i++)
//     {
//         scanf("%s", expression);
//         sscanf(expression, "(%d+%d)x(%d-%d)", &A, &B, &C, &D);

//         // Perform the calculation
//         result[i] = (A + B) * (C - D);
//     }

//     printf("%d %d %d\n", result[0], result[1], result[2]);

//     return 0;
// }

// FIX BY CLAUDE AND FCKING ME FUCCKKKKKKKKKK
// I DON'T EVEN KNOW WHAT HE FIX, HE JUST CHANGE THE VARIABLE INTO LONG LONG AND FCKKKK
// ALSO HE JUST CHECK THE CONDITION WHETHER THE INPUT IS NULL OR FUCKKKKKKAWLDAIUWGUGIADJSZXJKSPD.CKXLZPSA"

#include <stdio.h>

int main() {
    char expression[50];
    long long A, B, C, D;
    long long result[3];

    for (int i = 0; i < 3; i++) {
        if (fgets(expression, sizeof(expression), stdin) == NULL) {
            printf("Error reading input\n");
            return 1;
        }

        if (sscanf(expression, "(%lld+%lld)x(%lld-%lld)", &A, &B, &C, &D) != 4) {
            printf("Invalid input format\n");
            return 1;
        }

        // Perform the calculation
        result[i] = (A + B) * (C - D);
    }

    printf("%lld %lld %lld\n", result[0], result[1], result[2]);

    return 0;
}