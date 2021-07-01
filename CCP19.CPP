//Q19.WAP TO COPY ONE STRING TO ANOTHER STING AND CALCULATE ITS LENGTH WITHOUT USING THE BUILT-IN FUNCTION//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i=0,length=0;
 char a[100],b[100];
 printf("Enter the string : \n");
 gets(a);
 while(a[i]!='\0')
 {
  b[i]=a[i];
  i++;
 }
 b[i]='\0';
 for(i=0;b[i]!='\0';i++)
 {
  length++;
 }

 printf("The copied string is = %s\n",b);
 printf("The length of the copied string %s is = %d \n",b,length);
 getch();
}
