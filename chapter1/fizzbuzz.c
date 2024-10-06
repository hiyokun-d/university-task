#include <stdio.h>

int main()
{
    for(int i = 0; i < 100; i++) {
        if(i % 2 == 0) {
            printf("FIZZ \n");
        } else printf("BUZZ \n");
    }
    return 0;
}