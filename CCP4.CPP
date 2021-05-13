//WAP TO FIND THE AREA OF THE TRIANGLE WITH 3 SIDES//

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a,b,c,s;
 float A;
 printf("\n Enter the three sides of the triangle:");
 scanf("%d%d%d",&a,&b,&c);
 s=(a+b+c)/2;
 A=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("\n The area of triangle= %f ",A);
 getch();
}