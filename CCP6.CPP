//Q7.WAP TO ILLUSTRATE CONDITIONAL BRANCHING STATEMENT TO FIND THE SMALLEST OF THREE NUMBERS//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 printf("\n Enter the values for three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if(a<b && a<c)
 {
 printf("\n The samllest number=%d",a);
 }
 else if(b<c && b<a)
 {
  printf("\n The smallest number=",b);
 }
 else if(c<a && c<b)
 {
  printf("\n The smallest number=%d",c);
 }
 else
 {
  printf("\n ERROR STATEMENT");
 }
 getch();
}