//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>

//Declaring the function 
void swap(int , int); 

int main()  
{  
    int num1, num2;
    printf("Enter two numbers");
    // Scannning the numbers
    scanf("%d %d",&num1, &num2); 
    // printing the value of a and b in main 
    printf("Before swapping the values a = %d, b = %d\n",num1,num2);  
    swap(num1,num2); // calling swap function 
} 

void swap (int num1, int num2)  // Defining swap function
{  
    // Using addition and subtraction method the values are interchanged 
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    // Printing swapped values
    printf("After swapping values in function a = %d, b = %d\n",num1,num2);  
} 