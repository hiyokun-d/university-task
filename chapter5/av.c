#include <stdio.h>

int main() {
    int sum;
    scanf("%d", &sum);  

    int count = (sum + 1) * (sum + 2) / 2;

    printf("%d\n", count);  
    return 0;
}