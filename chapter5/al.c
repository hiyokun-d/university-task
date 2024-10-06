#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // Read number of weapons and dragon's attacks
    
    int weapons[N], dragonAttacks[M];
    
    // Read the weapon powers
    for (int i = 0; i < N; i++) {
        scanf("%d", &weapons[i]);
    }
    
    // Read the dragon's attack powers
    int max_dragon_attack = 0; // Initialize max attack power
    for (int i = 0; i < M; i++) {
        scanf("%d", &dragonAttacks[i]);
        if (dragonAttacks[i] > max_dragon_attack) {
            max_dragon_attack = dragonAttacks[i]; // Find the maximum dragon attack
        }
    }
    
    // Check if there is a weapon that can defeat all dragon attacks
    int can_win = 0; // Flag to check if Bibi can win
    for (int i = 0; i < N; i++) {
        if (weapons[i] > max_dragon_attack) {
            can_win = 1; // Bibi can win if this condition is met
            break;
        }
    }
    
    if (can_win) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }

    return 0;
}