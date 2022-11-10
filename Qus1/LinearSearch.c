//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include <stdio.h>
//Declaring the LinearSearch function
int LinearSearch(int [], int,int,int);

int LinearSearch(int arr[], int value, int index, int n) // Defining linear search function 
{
    int pos = 0;
 
    if(index >= n) // If search index is greater than the number of elements in array then we will not able to find the element then it will return 0
    {
        return 0;
    }
 
    else if (arr[index] == value) // Compare the array elements with the value we want to search 
    {
        pos = index + 1; // Position will store the element index which is equal to the value in array
        return pos; 
    }
 
    else
    {
        return LinearSearch(arr, value, index+1, n); // Calling the recursive function LinearSearch 
    }
    return pos; // Returning the position of the element which is equals to the value 
}
 
int main() //Calling main function
{
    int n, value, pos, m = 0, arr[100];
    printf("Enter the total elements in the array  ");
    scanf("%d", &n);    // Input number of elements in array
 
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]); //Scanning array elements 
    }
 
    printf("Enter the element to search  "); // Entering the element which we want to search
    scanf("%d", &value);
 
    pos =  LinearSearch(arr, value, 0, n); // Calling the LinearSearch function
    if (pos != 0) 
    {
        printf("Element found at pos %d ", pos);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}