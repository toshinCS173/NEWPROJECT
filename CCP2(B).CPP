//WAP TO FIND THE AVERAGE BETWEEN THREE NUMBERS USING FUNCTION//

#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,n3;
 void avg(int a, int b, int c);
 clrscr();
 printf("\n Enter the three numbers:");
 scanf("%d%d%d",&n1,&n2,&n3);
 avg(n1,n2,n3);
 getch();
}
void avg( int a, int b,int c)
{
 float average;
 average=(a+b+c)/3.0;
 printf("\n The average between three numbers= %f ",average);
}