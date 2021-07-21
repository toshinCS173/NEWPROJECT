//Q26.WAP to demonstrate file handling//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 FILE *fp;
 char str[40];
 printf("DATA INPUT \n");
 fp=fopen("BMSCE.txt","w");
 fgets(str,6,stdin);
 fclose(fp);
 printf("DATA OUTPUT \n");
 fp=fopen("BMSCE.txt","r");
 if(fp==NULL)
 {
  printf("error\n");
  exit(1);
 }
 fgets(str,6,fp);
 puts(str);
 fclose(fp);
 getch();
}
