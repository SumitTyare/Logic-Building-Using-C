/* 5. Accept two characters from user and swap contents of that two characters. */

#include<stdio.h>

void SwapChar(char*, char*);

void SwapChar(char *chLet1, char *chLet2)
{
  char chTemp = '\0';

  chTemp = *chLet1;
  *chLet1 = *chLet2;
  *chLet2 = chTemp;
}

int main(int argc, char* argv[])
{
  char chLet1 = 'A';
  char chLet2 = 'B';

  printf("Characters After Swapping => Char1 = %c char2 = %c\n", chLet1, chLet2);
  
  SwapChar(&chLet1, &chLet2);

  printf("Characters After Swapping => Char1 = %c, Char2 = %c\n", chLet1, chLet2);
  
  return 0;
}
