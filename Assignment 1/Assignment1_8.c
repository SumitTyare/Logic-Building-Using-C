/* 8. Accept one character from user and display that character on screen. */

#include<stdio.h>

void Display(char);


void Display(char chLet)
{
  printf("Entered Character is %c \n", chLet);
}


int main(int argc, char* argv[])
{
  char chLet = '\0';
  
  printf("Enter The Character=> ");
  scanf("%c", &chLet);

  Display(chLet);

  return 0;
}
