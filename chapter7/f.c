#include <stdio.h>
#include <string.h>

// Recursive function to print a string in reverse
void reverseString(char *s, int index)
{
    if (index < 0)
    {
        return; // Base case: if index is negative, stop recursion
    }
    printf("%c", s[index]);      // Print the current character
    reverseString(s, index - 1); // Recursive call with index decreased by 1
}

int main()
{
    int T;
    scanf("%d\n", &T); // Read the number of test cases

    for (int i = 1; i <= T; i++)
    {
        char S[1001];               // Maximum length of S is 1000, plus 1 for null terminator
        fgets(S, sizeof(S), stdin); // Read the input string including spaces

        // Remove the newline character from the string if present
        S[strcspn(S, "\n")] = '\0';

        // Print the case number
        printf("Case #%d: ", i);

        // Call the recursive function to print the string in reverse
        reverseString(S, strlen(S) - 1);
        printf("\n"); // Newline after each case
    }

    return 0;
}