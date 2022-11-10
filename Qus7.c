//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>
 
struct student // Decalring the structure named students and adding blocks of data
{
    int  marks[100];
    int  total;
    float percentage;
};
 
int main() // Calling main function
{
    struct student s; // Decalring student type as a structure
    int i,n;
 
    printf("Enter number of Subjects: \n ");
    scanf("%d",&n); 
    
 
    printf("Enter marks:\n");
    s.total=0; // Decalring total marks
    
    for(i=0;i< n;i++){
        printf("Marks in subject %d: ",i+1); // Iterate through loop to calculate to enter the marks total marks of student
        scanf("%d",&s.marks[i]);
        s.total+=s.marks[i]; // Calculating total marks
    }
    s.percentage=(float)((float)s.total/(float)500)*100; // Calculating the percentage of student
 
    printf("\nTotal Marks: %d \nPercentage: %.2f",s.total,s.percentage); 
 
    return 0;
}