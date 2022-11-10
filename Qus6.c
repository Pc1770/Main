//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>

void findFact(int,int*); // Declaring findFact function 

int main() // Calling main function
{
        int fact;
        int num1;
	printf("\n\n Pointer : Find the factorial of a given number :\n"); 
	printf(" Input a number : ");
	scanf("%d",&num1);	// Input the number for which we have to find factorial	 

         findFact(num1,&fact); // Calling findFact function
         printf(" The Factorial of %d is : %d \n\n",num1,fact);
         return 0;
        }

void findFact(int n,int *f)
{
    int i;

    *f =1; // Declaring Factorial as 1
    for(i=1;i<=n;i++)
    {
       *f=*f*i; // Finding Factorial of the number 
    }
    
}