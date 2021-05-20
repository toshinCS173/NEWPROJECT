//WAP TO PRINT AREA OF TRIANGLE WITH ITS THREE SIDES USING FUNCTIONS//
#include<stdio.h>
#include<conio.h>
#include<math.h>
float area(int x, int y, int z);

void main()
{
 clrscr();
 int a,b,c,s;
 float A;
 printf("\n Enter the three sides of the triangle:");
 scanf("%d%d%d",&a,&b,&c);
 A=area(a,b,c);
 printf("\n The area of triangle= %f ",A);
 getch();
}
float area(int x, int y, int z)
{
 float a1;
 int s;
 s=(x*y*z)/2;
 a1=sqrt(s*(s-x)*(s-y)*(s-z));
 return a1;
}
