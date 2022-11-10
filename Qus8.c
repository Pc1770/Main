//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>
struct student { // Designing a structure to store the student details
    char name[50];
    int roll;
    char address[50];
    int age;
    float avg_marks;
    
} s[15];

int main() {// Calling main function
    int i;
    printf("Enter information of students:\n");

    // storing information
    
    for (i = 0; i < 12; ++i) {
        s[i].roll = i + 1;
        printf("\nroll number%d,\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter address: ");
        scanf("%s", s[i].address);
        printf("Age:");
        scanf("%d", &s[i].age);
        printf("Enter avg_marks: ");
        scanf("%f", &s[i].avg_marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 12; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].name);
        printf("Address: ");
        puts(s[i].address);
        printf("\n Age: %d\n", s[i].age);
        printf("Marks: %.1f", s[i].avg_marks);
        printf("\n");
    }
    return 0;
}