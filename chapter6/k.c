#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);

    char kata[num][1010];
    for (int i = 0; i < num; i++)
    {
        scanf("%s", kata[i]);
    }

    for (int i = 0; i < num; i++)
    {
        int ubah = strlen(kata[i]);
        printf("Case #%d : ", i + 1);
        for (int j = ubah - 1; j >= 0; j--)
        {
            printf("%c", kata[i][j]);
        }
        printf("\n");
    }
    return 0;
}