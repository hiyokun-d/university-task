#include <stdio.h>
#include <string.h>

// struct k
// {
//     char name[101];
//     int nis;
//     int age;
// };

// int main()
// {
//     struct k student;

//     fgets(student.name, sizeof(student.name), stdin);
//     size_t len = strlen(student.name);
//     if (len > 0 && student.name[len - 1] == '\n')
//     {
//         student.name[len - 1] = '\0';
//     }

//     scanf("%d %d", &student.nis, &student.age);

//     printf("Name: %s\n", student.name);
//     printf("NIS: %d\n", student.nis);
//     printf("Age: %d\n", student.age);
//     return 0;
// }

int main() {
    char nama[101];
    char nis[11];
    int age;

    scanf("%[^\n]", nama);
    scanf("%s %d", nis, &age);

    printf("Name: %s\n", nama);
    printf("NIS: %s\n", nis);
    printf("Age: %d\n", age);

    return 0;
}