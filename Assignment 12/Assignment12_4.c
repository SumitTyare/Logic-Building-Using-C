/* 4. Accept Character from user and check whether it is small case or not (a-z). */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkSmall(char chChar)
{
  bool bAns = FALSE;
  
  if((chChar >= 'a') && (chChar <= 'z'))
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

  bAns = ChkSmall(chChar);

  if(bAns == TRUE)
    {
      printf("\nGIVEN CHARACTER %c IS : SMALL\n", chChar);
    }
  else
    {
      printf("\nGIVEN CHARACTER %c IS : NOT SMALL\n", chChar);
    }

  return 0;
}
