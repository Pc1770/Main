//Name- Divyanshi Kesarwani
//Registration number- 20215110

#include<stdio.h>
#include<stdlib.h>

// function to add two matrix
void add(int r, int c,int m[r][c], int n[r][c], int sum[r][c])
{
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      sum[i][j] = m[i][j] + n[i][j];
}

// function to multiply two matrix
void multiply(int r, int c, int m[r][c], int n[r][c], int result[r][c])
{
  for(int i=0; i < r; i++)
  {
    for(int j=0; j < c; j++)
    {
      result[i][j] = 0; // assign 0
      // find product
      for (int k = 0; k < r; k++)
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}

// function to find transpose of matrix
void transpose(int r, int c, int matrix[r][c], int trans[r][c])
{
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      trans[i][j] = matrix[j][i];
}

// function to display 3x3 matrix
void display(int r, int c, int matrix[r][c])
{
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n"); // new line
  }
}

// main function
int main()
{
  // matrix
  int row,col;
  int a[5][3];
  int b[5][5];
  int c[5][5];
    
  printf ("\n Enter number of rows \n");
  scanf("%d",&row);
  printf ("\n Enter number of columns \n");
  scanf("%d",&col);
  
  // Adding elements to first matrix;
  printf("Input first matrix \n")
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          scanf ("%d",&a[i][j]);
      }
  }
  
  printf("Input Second matrix \n");
  //Adding elements to Second matrix
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          scanf ("%d",&b[i][j]);
      }
  }
  // print both matrix 
  printf("First Matrix:\n");
  display(row,col,a);
  printf("Second Matrix:\n");
  display(row,col,b);

  // variable to take choice
  int choice;

  // menu-driven
  do
  {
    // menu to choose the operation
    printf("\nChoose the matrix operation,\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Transpose\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(row,col,a, b, c);
        printf("Sum of matrix: \n");
        display(row,col,c);
        break;
      case 2:
        multiply(row,col,a, b, c);
        printf("Multiplication of matrix: \n");
        display(row,col,c);
        break;
      case 3:
        printf("Transpose of the first matrix: \n");
        transpose(row,col,a, c);
        display(row,col,c);
        printf("Transpose of the second matrix: \n");
        transpose(row,col,b, c);
        display(row,col, c);
        break;
      case 4:
        exit(0);
      default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
  }while(1);

  return 0;
}