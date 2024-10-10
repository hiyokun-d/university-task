#include <stdio.h>
#include <string.h>

int nearest_vowel(char ch)
{
    // Nearest vowels
    if (ch >= 'B' && ch <= 'D')
        return 'A';
    if (ch >= 'F' && ch <= 'H')
        return 'E';
    if (ch >= 'J' && ch <= 'N')
        return 'I';
    if (ch >= 'P' && ch <= 'T')
        return 'O';
    if (ch >= 'V' && ch <= 'Z')
        return 'U';
    return ch; // for vowels, return the vowel itself
}

int vowel_distance(char ch)
{
    if (ch >= 'B' && ch <= 'D')
        return ch - 'A';
    if (ch >= 'F' && ch <= 'H')
        return ch - 'E';
    if (ch >= 'J' && ch <= 'N')
        return ch - 'I';
    if (ch >= 'P' && ch <= 'T')
        return ch - 'O';
    if (ch >= 'V' && ch <= 'Z')
        return ch - 'U';
    return 0; // for vowels, distance is 0
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        char message[1001];
        scanf("%s", message);

        int len = strlen(message);
        char encrypted[1001];
        int keys[1001];

        for (int i = 0; i < len; i++)
        {
            char ch = message[i];
            encrypted[i] = nearest_vowel(ch);
            keys[i] = vowel_distance(ch);
        }
        encrypted[len] = '\0';

        printf("Case #%d:\n%s\n", t, encrypted);
        for (int i = 0; i < len; i++)
        {
            printf("%d", keys[i]);
        }
        printf("\n");
    }
    return 0;
}