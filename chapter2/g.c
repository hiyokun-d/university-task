#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string [101];
    int valdi = 1;

    // chatGPT suggest me to remove the scanf and at the same time i feel so stupid
    //  Why i'm doing this
    // Why i;m forgetting that fgets also give user input
    // if Ai can say "you stupid" maybe they'll say it 
    // I can't even do math
    // Why i still doing this
    // my english even broken as my code
    // just tell me why i'm doing this again i need my motivation
    // not just motivation i need her, i need my bestfriends, i need my parents
    // I need all of person that believe in me that i'll make a game so that their children can play
    // That's it
    // scanf("%[^\n]", string);
    // I'm finding the error for just like 5 hours and yeah i give up with this

    //? TAKE THE STRING LENGTH
    fgets(string, sizeof(string), stdin);
    //? REMOVE THE NEWLINE CHARACTER IF IT'S IN THE CHARACTER
    string[strcspn(string, "\n")] = 0;

    for (int i = 0;  string[i] != '\0'; i++) 
    {
        //? CHECK IF THE INPUTS THERE WAS AN IMPOSTORRRRRR!!!!!! (NO NUMBER!!)
        if(!isalpha(string[i]) && string[i] != ' ') {
            valdi = 0;
            break;
        }
    }
    
    if(valdi)
    printf("Happy Birthday to %s.\n", string);
    else {
        return 0;
    }

    return 0;
}