//WAP TO CONCATENATE TWO STRING'S AND FIND THE LENGTH OF THE RESULTANT STRING WITHOUT USING THE BUILT-IN FUNCTION//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i=0,j=0,length=0;
 char a[100],b[100],c[100];
 printf("Enter the string : \n");
 gets(a);
 printf("Enter the string : \n");
 gets(b);
 while(a[i]!='\0')
 {
  c[j]=a[i];
  i++;
  j++;
 }
 i=0;
 while(b[i]!='\0')
 {
  c[j]=b[i];
  i++;
  j++;
 }
 for(j=0;c[j]!='\0';j++)
 {
  length++;
 }
 c[j]='\0';
 printf("THE RESULTANT/COMBINED STRING is : %s \n",c);
 printf("The length of the resultant string = %d \n",length);
 getch();
}