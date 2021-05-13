//Q3 WAP TO FIND THE AVERAGE BETWEEN THREE NUMBERS//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n1,n2,n3;
 float avg;
 printf("\n Enter three numbers:");
 scanf("%d%d%d", &n1, &n2,&n3);
 avg=(n1+n2+n3)/3;
 printf("\n The average between three numbers= %f ",avg);
 getch();
}