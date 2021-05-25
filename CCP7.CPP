//Q8. WAP DETERMINE A C PROGRAMM WETHER THE ENTERED CHARACTER IS A VOWEL OR CONSONANT USING SWITCH CASE STATEMENT//
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 printf("\n Enter the character to check whether its consonant or vowel:");
 scanf("%c",&ch);
 switch(ch)
 {
  case 'A':
  case 'a': printf("\n The entered character %c is a vowel",ch);
	  break;
  case 'E':
  case 'e': printf("\n The entered character %c is a vowel",ch);
	  break;
  case 'I':
  case 'i': printf("\n The entered character %c is a vowel",ch);
	  break;
  case 'O':
  case 'o': printf("\n The entered character %c is a vowel",ch);
	  break;
  case 'U':
  case 'u': printf("\n The entered character %c is a vowel",ch);
	  break;
  default: printf("\n The entered character %c is a consonant",ch);
 }
 getch();
}