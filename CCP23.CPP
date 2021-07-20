//Q23. WAP to illustrate pointers in swapping two numbers//
#include<stdio.h>
#include<conio.h>
void swap(int *a , int *b);
void main()
{
 clrscr();
 int num1,num2;
 printf("Enter the values of num1 and num2: \n");
 scanf("%d%d",&num1,&num2);
 printf("The values before swapping num1=%d and num2=%d \n",num1,num2);
 swap(&num1,&num2);
 printf("The values after swapping num1=%d and num2=%d \n",num1,num2);
 getch();
}
void swap(int *a, int *b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
}