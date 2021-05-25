//Q10.WAP TO DETERMINE THE MONTH GIVEN INPUT IN THE RANGE 1-12 USING SWITCH CASE STATEMENT//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 printf("\n Enter the Month Number:");
 scanf("%d",&n);
 switch(n)
 {
  case 1: printf("\n IT IS JANUARY MONTH");
	  break;
  case 2: printf("\n IT IS FEBRUARY MONTH");
	  break;
  case 3: printf("\n IT IS MARCH MONTH");
	  break;
  case 4: printf("\n IT IS APRIL MONTH");
	  break;
  case 5: printf("\n IT IS MAY MONTH");
	  break;
  case 6: printf("\n IT IS JUNE MONTH");
	  break;
  case 7: printf("\n IT IS JULY MONTH");
	  break;
  case 8: printf("\n IT IS AUGUST MONTH");
	  break;
  case 9: printf("\n IT IS SEPTEMBER MONTH");
	  break;
  case 10: printf("\n IT IS OCTOBER MONTH");
	  break;
  case 11: printf("\n IT IS NOVEMBER MONTH");
	  break;
  case 12: printf("\n IT IS DECEMBER MONTH");
	  break;
  default: printf("\n The entered month number doesnt exsit in the range 1-12");
 }
 getch();
}











