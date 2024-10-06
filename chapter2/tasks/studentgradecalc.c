#include <stdio.h>

int main()
{
    //  finalGrade = (assignment * 0.25) + (quiz * 0.15) + (midterm * 0.25) + (finalExam * 0.35);

    float assignment, quiz, midterm, finalExam, finalGrade;
    char letterGrade;

    printf("student assignment: ");
    scanf("%f", &assignment);

    printf("student quiz score: ");
    scanf("%f", &quiz);

    printf("student midterm: ");
    scanf("%f", &midterm);

    printf("student final exam score: ");
    scanf("%f", &finalExam);

    finalGrade = (assignment * 0.25) + (quiz * 0.15) + (midterm * 0.25) + (finalExam * 0.35);
    
    if(finalGrade >= 85) {
        letterGrade = 'A';
    } else if(finalGrade >= 70) {
        letterGrade = 'B';
    } else if(finalGrade >= 55) {
        letterGrade = 'C';
    } else if(finalGrade >= 40) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
        printf("That's student is need more study\n");
    }

    printf("Student final grade: %.2f\nLetter Grade: %c\n", finalGrade, letterGrade);
    
    return 0;
}