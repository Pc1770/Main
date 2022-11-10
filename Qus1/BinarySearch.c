//Name- Divyanshi Kesarwani
//Registration number- 20215110


#include <stdio.h>
//Declaring binary_search function
void binary_search(int [], int, int, int);
 
//Calling binary_search function
void binary_search(int arr[], int lo, int hi, int value) 
{
    int mid; // Declare mid of the array 
 
    if (lo > hi) // If last index is less than the first index then the searched element will not available in array 
    {
        printf("Key not found\n"); // Print the status of element 
        return;
    }
    mid = (lo + hi) / 2; // Find the mid index of the array 
    if (arr[mid] == value) // Compare the middle element of array with the value we want to search 
    {
        printf("Key found\n"); // If the element found at middle print the status 
    }
    else if (arr[mid] > value) // Compare if the element is present before the middle position 
    {
        binary_search(arr , lo, mid - 1, value); // If the element found before middle, call the binary_search recursive function to search the element present before middle
    }
    else if (arr[mid] < value) // Compare if the element is present after the middle position
    {
        binary_search(arr, mid + 1, hi, value); // If the element found after middle, call the binary_search recursive function to search the element present after middle
    }
}

int main() // Calling main function 
{
    int value, n, i; 
    int arr[25]; // Declaring the array 
 
    printf("Enter size of a array: "); 
    scanf("%d", &n); // Input number of elements in array
    printf("Enter the array elements\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d",&arr[i]); //Scanning array elements 
    }
    printf("\n");
    printf("Enter value to search\n");
    scanf("%d", &value);
    binary_search(arr, 0, n, value); // Calling the binary_search function
 
}
