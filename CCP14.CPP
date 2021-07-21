//WAP TO DEVELOPE A C PROGRAMME TO EXCHANGE THE LARGEST AND THE SMALLEST NUMBER IN THE GIVEN ARRAY//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],large,small,n,i,min,max;
 printf("Enter the number of elements to be entered: \n");
 scanf("%d",&n);
 printf("Enter the elemnts:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 small=a[0];
 large=a[0];
 min=0;
 max=0;
 for(i=0;i<n;i++)
 {
  if(a[i]>large)
  {
   large=a[i];
   max=i;
  }
  if(a[i]<small)
  {
   small=a[i];
   min=i;
  }
 }
 printf("Before exchanging the largest is %d and smallest numbers in an array is %d \n",a[max],a[min]);
 int temp=a[min];
 a[min]=a[max];
 a[max]=temp;
 printf("After exchanging the largest no is %d and the smallest no is %d \n" ,a[max],a[min]);
 printf("After interchange array elements are:\n");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 getch();
}