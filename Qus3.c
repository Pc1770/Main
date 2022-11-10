//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>
 
void towers(int, char, char, char); // Declaring the function 
 
int main() // Calling main function
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B'); // Calling towers function
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg) // Defining towes function
{
    // Base Condition if no of disks are
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
 
    // Recursively calling function twice
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg); // Printing the output after moving the disk
    towers(num - 1, auxpeg, topeg, frompeg);
}