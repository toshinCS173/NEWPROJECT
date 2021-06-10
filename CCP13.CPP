//WAP TO DEVELOPE A C PROGRAMME TO CALCULATE THE SUM OF FIRST N ODD NUMBERS//
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int arr[100],i,n,sum=0;
 printf("Enter the limit of the elements that can be entered in an array:\n");
 scanf("%d",&n);
 printf("Enter the elements of an array : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  if(arr[i]%2!=0)
  {
   sum = sum +pow(arr[i],2);
  }
 }
 printf("The sum of the squares of the first N odd numbers are %d\n",sum);
 getch();
}