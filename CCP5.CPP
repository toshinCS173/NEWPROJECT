//WAP TO FIND THE AREA OF A TRIANGLE FROM THE INPUTS FOR SIDES OF THE TRIANGLE//
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a,b,c;
 float d,root1,root2,real_root1,real_root2,img_root1,img_root2;
 printf("\n Enter the value for 1->co-efficient of x^2,\n 2->co-efficient of x,\n 3->constant:");
 scanf("%d%d%d",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if (d==0)
 {
  printf("\n The roots are equal and real");
  root1=(-b)/(2*a);
  root2=root1;
  printf("\n The roots are %f and %f",root1,root2);
 }
 else if (d>0)
 {
  printf("\n The root are real and distinct");
  root1=(-b+sqrt(d))/(2*a);
  root2=(-b-sqrt(d))/(2*a);
  printf("\n The root are %f and %f",root1,root2);
 }
 else
 {
  printf("\n The root are imaginary");
  real_root1 = - b/(2*a);
  real_root2 = -b/(2*a);
  img_root1 =
  sqrt(d)/(2*a);
  img_root2 =-sqrt(d)/(2*a);
  printf("\n The real part of roots are %f and %f",real_root1,real_root2);
  printf("\n The imaginary part of the root are %f and %f",img_root1,img_root2);
 }
 getch();
}