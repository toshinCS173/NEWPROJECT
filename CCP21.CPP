//Q21.WAP TO REVERSE A STRING AND TO CHECK WHETHER ITS PALINDROME OR NOT//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[100],rev_a[100];
 int i,j,l,c=0;
 printf("Enter the string : \n");
 gets(a);
 l=strlen(a);
 printf("The string before reversing is: %s \n",a);
 j=0;
 for(i=l-1;i>=0;i--)
 {
  rev_a[j]=a[i];
  j++;
 }
 rev_a[j]='\0';
 printf("The srting after reversing is : %s \n",rev_a);
 for(i=0;i<(l/2);i++)
 {
  if(a[i]==a[l-i-1])
  {
   c++;
  }
 }
 if(c==i)
 {
  printf("The string %s is palindrome \n",a);
 }
 else
 {
  printf("The string %s is not palindrome \n",a);
 }
 getch();
}