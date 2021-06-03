//WAP TO DEVELOPE A C PROGRAMME TO PRINT EVEN NUMBERS FROM M TO N//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int m,n;
 printf("Enter the value for m and n: \n");
 scanf("%d%d", &m,&n);
 printf("ALL EVEN NO's= \n");
 while(m<n)
 {
  if(m%2==0)
  {
   printf("M = %d \n",m);
  }
  m = m+1;
 }
 getch();
}


