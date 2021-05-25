//Q9.WAP TO CONVERT TIME(IN MINUTES AND HOURS) TO MINUTES  USING FUNCTIONS//
#include<stdio.h>
#include<conio.h>
int minutes(int m, int h);
void main()
{
 clrscr();
 int min,hr,min_1;
 printf("\n Enter the time in minutes and hours:");
 scanf("%d%d",&min,&hr);
 min_1=minutes(min,hr);
 printf("\n The time in minutes is %d",min_1);
 getch();
}
int minutes(int m, int h)
{
 int totalminutes;
 totalminutes= m + h*60;
 return totalminutes;
}

