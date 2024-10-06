#include<stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);  // range

    for (int i = 1; i <= a; i++) {
        scanf("%d", &b);  
        printf("Case #%d: ", i);  

        for (int j = 0; j < b; j++) {
            printf("%c", 97 + j);  // ASCII (a, b, c, ...)
        }

        printf("\n");  
    }
}
