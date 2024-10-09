#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int garden[x][y];

    // NGELOOP DATA X AMA Y
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &garden[i][j]); // BUAT NGEINPUT I AMA J
        }
    }

    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        // ngubah value yang ada di length bagian akhir jadi value C
        garden[a-1][b-1] = c;
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            printf("%d", garden[i][j]); // INI OUTPUT DOANG ANJIR
            if(j < y-1) {
                printf(" "); // ngehandle kelebihan whitespace atau spasi yang gak di butuhin
            }
        }
        printf("\n");
    }

    return 0;
}