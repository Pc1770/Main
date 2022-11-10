//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>

struct person // Create a structure to enter details
{
   char name[50];
   int Rollno;
   char course[50];
   char branch[50];
   char Dept[50];
};

int main()
{
    struct person *personPtr, person1; // Making pointer of struct to reference the details
    personPtr = &person1;   

    //Input the details for the student
    printf("Enter name: ");
    scanf("%s", personPtr->name);

    printf("Enter Rollno: ");
    scanf("%d", &personPtr->Rollno);
    
    printf("Enter course: ");
    scanf("%s", personPtr->course);
    
    printf("Enter branch: ");
    scanf("%s", personPtr->branch);
    
    printf("Enter Dept: ");
    scanf("%s", personPtr->Dept);

    printf("Displaying the details:\n");
    printf("Name: %s\n", personPtr->name);
    printf("Rollno: %d\n", personPtr->Rollno);
    printf("course: %s \n" , personPtr->course);
    printf("branch: %s \n" , personPtr->branch);
    printf("Dept: %s \n" , personPtr->Dept);
    

    return 0;
}