#include <stdio.h>
#include <string.h>

char *fiboString(int d, char a, char b)
{
    static char s0[1000], s1[1000], temp[1000];
    s0[0] = a;
    s0[1] = '\0';
    s1[0] = b;
    s1[1] = '\0';

    // KALO USERNYA NGEYEL YAUDAH KITA NGEPRINT AJA
    if (d == 0)
    {
        return s0;
    }

    if (d == 1)
    {
        return s1;
    }
    /////////////////////////////////////////////////////////////////////////////////

    for (int i = 2; i <= d; i++)
    {
        strcpy(temp, s1);
        strcat(s1, s0); //? ngegabungin atau ngeupdate stringnya dalam case ini gw updatenya tuh s1
        strcpy(s0, temp);
    }

    return s1;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int t;
        char a, b;
        scanf("%d %c %c", &t, &a, &b);
        fiboString(t, a, b);

        printf("Case #%d: %s\n", i + 1, fiboString(t, a, b));
    }
    return 0;
}