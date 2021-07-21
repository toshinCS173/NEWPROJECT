//WAP to create student structure, read 2 student details(STUDENT's -> roll number,name,section,department,fees and results(total marks)).Print the student details who has scored the highest marks.//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 struct student
 {
  char roll_no[100];
  char name[100];
  char sec[20],dept[50];
  float fees;
  int result;
 }stu1,stu2;
 printf("Enter the deatil of STUDENT-1: NAME,ROLL_NO,SECTION,DEPARTMENT,FEES AND RESULT : \n");
 scanf("%s%s%s%s",&stu1.name,&stu1.roll_no,&stu1.sec,&stu1.dept);
 scanf("%f%d",&stu1.fees,&stu1.result);
 printf("Enter the deatil of STUDENT-2 NAME,ROLL_NO,SECTION,DEPARTMENT,FEES AND RESULT : \n");
 scanf("%s%s%s%s",&stu2.name,&stu2.roll_no,&stu2.sec,&stu2.dept);
 scanf("%f%d",&stu2.fees,&stu2.result);
 if(stu1.result>stu2.result)
 {
  printf("The student-1 has scored the highest, NAME-%s, ROLL NO-%s, SECTION-%s, DEAPRTMENT-%s, RESULT-%d \n",stu1.name,stu1.roll_no,stu1.sec,stu1.dept,stu1.result);
 }
 else if(stu2.result>stu1.result)
 {
  printf("The student-2 has scored the highest, NAME-%s, ROLL NO-%s, SECTION-%s, DEAPRTMENT-%s, RESULT-%d \n",stu2.name,stu2.roll_no,stu2.sec,stu2.dept,stu2.result);
 }
 else
 {
  printf("BOTHE the student have equal marks \n");
 }
 getch();
}