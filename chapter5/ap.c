#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Input the number of test cases

    for (int t = 1; t <= T; t++) {
        int N, K;
        scanf("%d %d", &N, &K);  // Input the length of the string and the shift value

        char S[101];
        scanf("%s", S);  // Input the string S

        printf("Case #%d: ", t);
        
        // Process each character in the string
        for (int i = 0; i < N; i++) {
            int letter_value = S[i] - 'a';  // Convert the character to a number (0-25)
            int shifted_value = (letter_value + K) % 26;  // Shift and wrap around using modulo 26
            char new_char = 'a' + shifted_value;  // Convert the number back to a character
            printf("%c", new_char);  // Output the shifted character
        }
        
        printf("\n");
    }

    return 0;
}