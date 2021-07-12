//Q26.WAP to demonstrate file handling//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 FILE *BMSCE;
 char c;
 char str[40];
 printf("DATA INPUT \n");
 BMSCE=fopen("input.txt","w");
 while((c=getchar())!=EOF)
 putc(c,BMSCE);
 fclose(BMSCE);
 printf("DATA OUTPUT \n");
 BMSCE=fopen("input.txt","r");
 if(BMSCE==NULL)
 {
  printf("error\n");
  exit(1);
 }
 fgets(str,40,BMSCE);
 puts(str);
 fclose(BMSCE);
 return 0;
}