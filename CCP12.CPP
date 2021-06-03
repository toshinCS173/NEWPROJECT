//WAP TO DEVELOPE A C PROGRAMME TO PRINT MULTIPLES OF N FROM 1 TO 100//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i=1;
 printf("Enter the value of number to find the multiples of it from 1 to 100: \n");
 scanf("%d",&n);
 while(i<=100)
 {
  int m = n*i;
  printf("%d * %d = %d \n ",n,i,m);
  i=i+1;
 }
 getch();
}