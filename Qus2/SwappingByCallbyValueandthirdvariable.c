//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>

void swap(int , int); //Declaring the function 

int main()  
{  
    int num1, num2;
    printf("Enter two numbers");
    scanf("%d %d",&num1, &num2); // Scannning the numbers
    printf("Before swapping the values a = %d, b = %d\n",num1,num2); // printing the value of a and b in main  
    swap(num1,num2); // calling swap function 
}  
void swap (int num1, int num2)  // Defining swap function
{  
    int temp;   // Declaring a temp variable to store the swapped number
    temp = num1;  
    num1=num2;  
    num2=temp;  
    printf("After swapping values in function a = %d, b = %d\n",num1,num2); // Printing swapped values  
} 