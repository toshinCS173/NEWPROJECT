//WAP TO DEVELOPE A C PROGRAMME TO CALCULATE THE AVERAGE OF N NUMBERS//
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int arr[100],i,n,sum=0;
 float avg;
 printf("Enter the limit of the elements that can be entered in an array:\n");
 scanf("%d",&n);
 printf("Enter the elements of an array : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
   sum = sum +arr[i];
 }
 printf("The sum of the %d numbers are %d \n",n,sum);
 avg = sum / n;
 printf("The average of the %d numbers are %f  \n",n,avg);
 getch();
}