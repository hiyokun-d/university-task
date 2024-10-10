#include <stdio.h>
#include <string.h>

void reverseSegment(char *str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        int Q;
        char code[1001];
        scanf("%d %s", &Q, code);

        for (int i = 0; i < Q; i++)
        {
            int L, R;
            scanf("%d %d", &L, &R);
            reverseSegment(code, L - 1, R - 1);
        }

        printf("Case #%d: %s\n", t, code);
    }

    return 0;
}