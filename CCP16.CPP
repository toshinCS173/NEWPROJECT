//Q(16).WAP TO FIND THE SUM OF TWO MATRICES//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a1[10][10],a2[10][10],sum[10][10],i,j,row1,row2,col1,col2,row_sum,col_sum;
 printf("Enter the size of the row and column for the first matrix: \n");
 scanf("%d%d",&row1,&col1);
 printf("Enter the size of the row and column for the second matrix: \n");
 scanf("%d%d",&row2,&col2);
 if(row1!=row2 || col1!=col2)
 {
  printf("The number of rows and columns of the matrices must be equal\n");
 }
 row_sum=row1;
 col_sum=col1;
 printf("Enter the elements for the first matrix \n");
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
  {
   scanf("%d",&a1[10][10]);
  }
 }
 printf("Enter the elements for the second matrix \n");
 for(i=0;i<row2;i++)
 {
  for(j=0;j<col2;j++)
  {
   scanf("%d",&a2[10][10]);
  }
 }
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
  {
   sum[10][10]=a1[10][10]+a2[10][10];
  }
 }
 printf("The elements of the resultant matrix is : \n");
  for(i=0;i<row_sum;i++)
 {
  printf("\n");
  for(j=0;j<col_sum;j++)
  {
   printf("\t %d",sum[10][10]);
  }
 }
 getch();
}

