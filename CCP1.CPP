//WAP TO CONVERT THE TEMPERATURE FROM FAHRENHEIT TO CELSIUS//
#include<stdio.h>
#include<conio.h>
#include<math.h>

float main()
{
 float F,C;
 printf("\n Enter the value for temperature in FAHRENHEIT :");
 scanf("%f", &F);
 C=(5*(F-32))/9;
 printf("\n The given temperature in CELSIUS is= %f",C);
 getch();
 return(0);
}