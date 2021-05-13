//WAP TO FIND THE DISTANCE BETWEEN TWO POINTS//

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int x1,y1,y2,x2;
 float d;
 printf("\n Enter the values for the first co-ordinates(points):");
 scanf("%d%d", &x1, &y1);
 printf("\n Enter the values for the second co-ordinates(point):");
 scanf("%d%d", &x2, y2);
 d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
 printf("\n The distance between (%d%d) and (%d%d) is = %f",x1,y1,x2,y2,d);
 getch();
}