// Write a c program to multiply 2 matrices
/*  Algorithm

Step1: Start
Step2: Declare variables a[50][50],b[50][50],res[50][50],r,c,i,j,k of type int
Step3: Read the number of rows and columns to variables r&c respectively
Step4: Read the elements of first matrix
        4.1: for i=0 till i<r
        4.2: for j=0 till j<c
        4.3: Read the elements to a[i][j]
 Step5: Read the elements of second matrix
         5.1: for i=0 till i<r
         5.2: for j=0 till j<c
         5.3:  Read the elements to b[i][j]
Step6: Multiply the two matrices and store the value to third matrix
        6.1: for i=0 till i<r
        6.2: for j=0 till j<c
        6.3: for k=0 till j<c
        6.4: res[i][j]+={a[i][k]*b[k][j]}

Step7: Print the first Matrix
        7.1: for i=0 till i<r
        7.2: for j=0 till j<c
        7.3: Display the elements in the first matrix
Step8: Print the first Matrix
        8.1: for i=0 till i<r
        8.2: for j=0 till j<c
        8.3: Display the elements in the second matrix
Step9: Print the Multiplied Matrix
        9.1: for i=0 till i<r
        9.2: for j=0 till j<c
        9.3: Display the elements in the multiplied matrix
Step10: Stop

*/
#include <stdio.h>
void main()
{
  int a[50][50], b[50][50], res[50][50], i, j, k, r,c;
  
  printf("Enter the no.of rows and columns(respectively)\n");
  scanf("%d%d", &r, &c);
  
  printf("Enter the elements of first matrix\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
      scanf("%d", &a[i][j]);
  
  printf("Enter the elements of second matrix\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
      scanf("%d", &b[i][j]);
                             
  for (i = 0; i < r; i++)         
    for (j = 0; j < c; j++)     
      for (k = 0; k < c; k++)
        res[i][j] += a[i][k] * b[k][j];
  
  printf("\nFirst Matrix\n"); 
  for (i = 0; i < r; i++)     
  {
    for (j = 0; j < c; j++) 
    {
      printf("\t%d", a[i][j]); 
    }
    printf("\n");
  }

  printf("\nSecond Matrix\n"); 
  for (i = 0; i < r; i++)      
  {
    for (j = 0; j < c; j++)
    {
      printf("\t%d", b[i][j]);
    }
    printf("\n");
  }
  
  printf("\nResultant Matrix\n"); 
  for (i = 0; i < r; i++)         
  {
    for (j = 0; j < c; j++)
    {
      printf("\t%d",
             res[i][j]); 
    }
    printf("\n");
  }
} 
