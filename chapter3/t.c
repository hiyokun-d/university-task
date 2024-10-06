#include <stdio.h>

int main()
{
    char course[5][11];
    int hh[20], mm[59], lasthh[20], lastmm[59];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d:%d-%d:%d", course[i], &hh[i], &mm[i], &lasthh[i], &lastmm[i]);

        hh[i]--;
        lasthh[i]--;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s %02d:%02d-%02d:%02d\n", course[i], hh[i], mm[i], lasthh[i], lastmm[i]);
    }

    return 0;
}