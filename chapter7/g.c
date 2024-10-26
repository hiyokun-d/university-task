#include <stdio.h>
#include <string.h>

char *revString(char string[])
{
    char temp;
    int len = strlen(string);
    for (int i = 0; i < len / 2; i++)
    {
        temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }

    return string;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[1000];
        scanf("%s", str);
        char temp[1000];
        strcpy(temp, str);
        revString(str);

        if (strcmp(temp, str) == 0)
        {
            printf("Case #%d: yes\n", i + 1);
        }
        else
            printf("Case #%d: no\n", i + 1);
    }
    return 0;
}