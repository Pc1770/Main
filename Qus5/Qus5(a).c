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
    struct person s; 

    //Input the details for the student
    printf("Enter The Information of Students :\n\n");
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter Rollno: ");
    scanf("%d", &s.Rollno);
    
    printf("Enter course: ");
    scanf("%s", s.course);
    
    printf("Enter branch: ");
    scanf("%s", s.branch);
    
    printf("Enter Dept: ");
    scanf("%s", s.Dept);

    printf("Displaying the details:\n");
    printf("Name: %s\n", s.name);
    printf("Rollno: %d\n", s.Rollno);
    printf("course: %s \n" , s.course);
    printf("branch: %s \n" , s.branch);
    printf("Dept: %s \n" , s.Dept);
    

}