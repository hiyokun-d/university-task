#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n][1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

     for (int i = 0; i < n; i++) {
        int len = strlen(str[i]);
        printf("Case %d:", i + 1);
        for(int j = 0; j < len; j++) {
           printf("%c%d", (j == 0 ? ' ' : '-'), str[i][j]); 
        }
        printf("\n");
     }

    return 0;
}