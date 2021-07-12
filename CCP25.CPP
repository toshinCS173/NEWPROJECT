//Q.25. WAP to perform arithmethic operations(addition,subtraction,division,multiplication,remainder),on two integers using pointers//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num1,num2;
 int *ptr1,*ptr2;
 printf("Enter the values of two integers: \n");
 scanf("%d%d",&num1,&num2);
 ptr1=&num1;
 ptr2=&num2;
 int sum,sub,mult;
 float div,rem;
 sum=(*ptr1)+(*ptr2);
 sub=(*ptr1)-(*ptr2);
 mult=(*ptr1)*(*ptr2);
 div=(*ptr1)/(*ptr2);
 rem=(*ptr1)%(*ptr2);
 printf("ADDITION = %d \n",sum);
 printf("SUBTRACTION = %d \n",sub);
 printf("MULTIPLICATION = %d \n",mult);
 printf("DIVISION = %f \n",div);
 printf("REMAINDER = %f \n",rem);
 getch();
}