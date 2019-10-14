/* 9. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkSymbol(char chChar)
{
  bool bAns = FALSE;
  
  if(((chChar >= 'a') && (chChar <= 'z')) || ((chChar >= 'A') && (chChar <= 'Z')) || ((chChar >= '0') && (chChar <= '9')))
    {
      bAns = FALSE;
    }
  else
    {
      bAns = TRUE;
    }

  return bAns;
}

int main(int argc, char* argv[])
{
  char chChar = '\0';
  bool bAns = FALSE;

  printf("\nENTER THE CHARACTER : ");
  scanf("%c", &chChar);

  bAns = ChkSymbol(chChar);

  if(bAns == TRUE)
    {
      printf("\nGIVEN CHARACTER %c IS : SPECIAL SYMBOL\n", chChar);
    }
  else
    {
      printf("\nGIVEN CHARACTER %c IS : NOT SPECIAL SYMBOL\n", chChar);
    }

  return 0;
}


