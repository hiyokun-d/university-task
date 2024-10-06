#include <stdio.h>
#include <ctype.h> // For isalpha()

int main()
{
    int T;
    scanf("%d", &T);
    int N[T];
    char S[101], result[T][101];

    for (int i = 0; i <= T; i++)
    {

        scanf("%d", &N[i]);

        scanf(" %[^\n]", S);

        int k = 0;
        for (int j = 0; S[j] != '\0'; j++)
        {
            if (isalpha(S[j]))
            {
                result[i][k++] = S[j]; // Store only alphabetic characters
            }
        }
        result[i][k] = '\0'; // Null-terminate the result string
    }

    for (int i = 0; i < T; i++)
    {
        printf("Case #%d: %s\n", i + 1, result[i]);
    }

    return 0;
}