#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[101] = "";

    scanf("%[^\n]", string);

    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", string);
    return 0;
}
