//WAP TO DEVELOPE A C PROGRAMME TO ENTER A NUMBER AND TO FIND THE SUM OF ITS DIGITS//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,r,sum=0;
 printf("Enter a number: \n");
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  sum = sum + r;
  n=n/10;
 }
 printf("The sum of the digits of the given number = %d \n",sum);
 getch();
}