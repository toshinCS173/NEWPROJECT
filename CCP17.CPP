//Q 17.WAP TO DEMONSTRATE READING A 2-D ARRAY OF MARKS WHICH STORES MARKS OF 4 STUDENTS IN 3 SUBJECT AND DIISPLAY THE HIGHEST MARKS IN EACH SUBJECT//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int marks[5][5],marks_max[5];
 int i,j,max;
 printf("Enter marks in three subjects: \n");
 for(i=0;i<4;i++)
 {
  printf("STUDENT %d \n",(i+1));
  for(j=0;j<3;j++)
  {
  scanf("%d",&marks[i][j]);
  }
 }
 printf("The array of marks is: \n");
 for(i=0;i<4;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("\t %d",marks[i][j]);
  }
 }
 printf("\n");
 for(j=0;j<3;j++)
 {
  max=marks[0][j];
  for(i=0;i<4;i++)
  {
   if(marks[i][j]>max)
   {
    max=marks[i][j];
   }
  }
  marks_max[j]=max;
 }
 printf("The max marks in the subjects are \n");
 for(i=0;i<3;i++)
 {
  printf("\t %d",marks_max[i]);
 }
 getch();
}
