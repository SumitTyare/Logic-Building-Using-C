/* 2. Accept Character from user and check whether it is capital or not (A-Z). */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkCapital(char chChar)
{
  bool bAns = FALSE;
  
  if((chChar >= 'A') && (chChar <= 'Z'))
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

  bAns = ChkCapital(chChar);

  if(bAns == TRUE)
    {
      printf("\nGIVEN CHARACTER %c IS : CAPITAL\n", chChar);
    }
  else
    {
      printf("\nGIVEN CHARACTER %c IS : NOT CAPITAL\n", chChar);
    }

  return 0;
}
