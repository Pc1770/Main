//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>
struct student // Designing a structure to store the student details
{
    char name[50];
    int roll;
    float marks;
    char grade[50];
};

int main() // Calling main function
{
    int n;
    printf("Enter number of Students");
    scanf("%d",&n); // Input n records for students
    
    struct student s[n]; // Creating structure array to store the details
    int i;
     
    for(i=0;i< n ;i++)
    {
      printf("Enter name, roll marks of student and grade:\n");
      scanf("%s%d%f%s",s[i].name, &s[i].roll, &s[i].marks,s[i].grade); //Input the details 
    }
    printf("Inputted details are:\n");
    for(i=0;i< n;i++)
    {
      printf("Marks: %0.2f\n\n", s[i].marks); // Printing the marks of student
    }
}