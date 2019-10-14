/* 1. Accept Character from user and check whether it is alphabet or not (A-Z a-z). */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkAlphabet(char chChar)
{
  bool bAns = FALSE;
  
  if(((chChar >= 'a') && (chChar <= 'z')) || ((chChar >= 'A') && (chChar <= 'Z')))
    {
      bAns = TRUE;
    }
  else
    {
      bAns = FALSE;
    }

  return bAns;
}

int main(int argc, char* argv[])
{
  char chChar = '\0';
  bool bAns = FALSE;

  printf("\nENTER THE CHARACTER : ");
  scanf("%c", &chChar);

  bAns = ChkAlphabet(chChar);

  if(bAns == TRUE)
    {
      printf("\nGIVEN CHARACTER %c IS : ALPHABET\n", chChar);
    }
  else
    {
      printf("\nGIVEN CHARACTER %c IS : NOT ALPHABET\n", chChar);
    }

  return 0;
}
