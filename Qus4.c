//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>

void compare(int, int, int*, int*); //Declaring compare function 


// add is the short name for address
void compare(int a, int b, int* add_great, int* add_small) // Defining compare function 
{
	if (a > b) {

		// a is stored in the address pointed
		// by the pointer variable *add_great
		*add_great = a;
		*add_small = b;
	}
	else {
		*add_great = b;
		*add_small = a;
	}
}

// Driver code
int main()
{
	int great, small, x, y;

	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y);

	// The last two arguments are passed
	// by giving addresses of memory locations
	compare(x, y, &great, &small); // Calling compare function
	printf("\nThe greater number is %d and the smaller number is %d",
		great, small); // Printing the numbers as mentioned in the condition 

	return 0;
}
