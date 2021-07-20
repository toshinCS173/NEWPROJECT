//Q22.Develope a C program to read and print three book details(i.e., BOOK TITLE, AUTHOR,PRICE,NO OF PAGES,DATE OF PUBLICATION).Also print the book with highest price.//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 struct book
 {
  char author[20];
  char title[20];
  int no_pages;
  float price;
  char publication[20];
 };
 struct book book1;
 struct book book2;
 struct book book3;
 printf("Enter the details of book-1 : Author,Title,Number of pages,price,publication, \n");
 scanf("%s%s%d%f%s",&book1.author,&book1.title,&book1.no_pages,&book1.price,&book1.publication);
 printf("Enter the details of book-2 : Author,Title,Number of pages,price,publication, 	\n");
 scanf("%s%s%d%f%s",&book2.author,&book2.title,&book2.no_pages,&book2.price,&book2.publication);
 printf("Enter the details of book-3 : Author,Title,Number of pages,price,publication, \n");
 scanf("%s%s%d%f%s",&book3.author,&book3.title,&book3.no_pages,&book3.price,&book3.publication);
 if(book1.price>book2.price&&book1.price>book3.price)
 {
  printf("The book 1 is expensive , detail->Author-%s, Tile-%s, Publication-%s, Price-%f \n",book1.author,book1.title,book1.publication,book1.price);
 }
 if(book2.price>book1.price&&book2.price>book3.price)
 {
  printf("The book 2 is expensive , detail->Author-%s, Tile-%s, Publication-%s, Price-%f \n",book2.author,book2.title,book2.publication,book2.price);
 }
 else if(book3.price>book2.price&&book3.price>book1.price)
 {
  printf("The book 3 is expensive , detail->Author-%s, Tile-%s, Publication-%s, Price-%f \n",book3.author,book3.title,book3.publication,book3.price);
 }
 else
 {
  printf("ALL the three book are of same price. \n");
 }
}