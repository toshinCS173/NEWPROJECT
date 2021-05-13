//WAP TO CONVERT THE TEMPERATURE FROM CELSIUS TO FAHRENHIT//
#include<stdio.h>
#include<conio.h>
#include<math.h>

float main()
{
 float F,C;
 printf("\n Enter the value for temperature in celsius:");
 scanf("%f", &C);
 F=((C*9)/5)+32;
 printf("\n The given temperature in fahrenheit is= %f",F);
 getch();
 return(0);
}