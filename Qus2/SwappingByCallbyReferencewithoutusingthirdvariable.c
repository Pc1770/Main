//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>

//Declaring the function
void swap(int *, int*);

//Defining swap function
void swap(int* num1, int* num2) 
{
    // Using addition and subtraction method the values are interchanged 
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

//Calling main function
int main()
{
    int num1,num2;
    printf("Enter two numbers \n");
    scanf("%d, %d",&num1,&num2);
    swap(&num1, &num2);
    printf("After swap num1 = %d, num2=%d", num1,num2);
    
}