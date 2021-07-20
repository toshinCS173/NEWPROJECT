//WAP TO FIND ALL POSSIBLE ROOTS OF A QUADRATIC EQUATIONS//
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int a,b,c;
 float d,root1,root2;
 double real_root;
 double img_root;
 printf("\n Enter the value for 1->co-efficient of x^2,\n 2->co-efficient of x,\n 3->constant: \n");
 scanf("%d%d%d",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if (d==0)
 {
  printf("\n The roots are equal and real");
  root1=(-b-sqrt(d))/(2*a);
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
  real_root= - b/(2*a);
  img_root =sqrt(-d)/(2*a);
  printf("\n The real part of roots are %2lf\n",real_root);
  printf("\n The imaginary part of the root are %2lfi \n",img_root);
 }
 getch();
}