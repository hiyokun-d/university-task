#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char result[n][10];

    for (int i = 0; i < n; i++)
    {
        char str[51]; // gw gak tau kenapa gw masang memorynya banyak banget but if it work then it work don't change it
        scanf("%s", str);

        int charExist[26] = {0}; // SOALNYA KAN ADA 26 HURUF A-Z
        int bitmask = 0;         //  untuk ngetrack huruf huruf yang sama atau apalah

        for (int j = 0; str[j] != '\0'; j++)
        {
            int index = str[j] - 'a'; // ngekalkulasiin (0-25)
            if (charExist[index] == 0)
            {
                charExist[index] = 1;
                bitmask |= (1 << index);
            }
        }

        // tanyakan pada GPT ini ngapain soalnya gw aja baru tau kalo ini exist aowkaowkaowk
        int distinctCount = __builtin_popcount(bitmask);

        // karena kita cuman mau ngedeteksi 2 huruf doang jadinya kita pasang modulus 2 disini
        if (distinctCount % 2 == 0)
            printf("Case #%d: Yay\n", i + 1);
        else
            printf("Case #%d: Ewwww", i + 1);
    }

    return 0;
}