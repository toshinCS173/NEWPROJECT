//WAP TO FIND THE TRANSPOSE OF THE GIVEN MATRIX//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int row,col,i,j,a[10][10],transpose[10][10];
 printf("Enter the number of rows and columns : \n");
 scanf("%d%d",&row,&col);
 printf("Enter the elements of the matrix: \n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   transpose[j][i]=a[i][j];
  }
 }
 printf("Transpose of the given matrix:\n");
 for(i=0;i<col;i++)
 {
  printf("\n");
  for(j=0;j<row;j++)
  {
   printf("\t %d",transpose[i][j]);
  }
 }
 getch();
}
