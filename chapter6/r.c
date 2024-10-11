#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1001

void transform_string(char *str, char A, char B)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == A)
        {
            str[i] = B;
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int case_number = 1; case_number <= T; case_number++)
    {
        char original[MAX_LENGTH];
        scanf("%s", original);

        int M;
        scanf("%d", &M);

        for (int j = 0; j < M; j++)
        {
            char A, B;
            scanf(" %c %c", &A, &B);
            transform_string(original, A, B);
        }

        printf("Case #%d: %s\n", case_number, original);
    }

    return 0;
}