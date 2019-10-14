/* 3. Accept Character from user and check whether it is digit or not (0-9). */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkDigit(char chChar)
{
  bool bAns = FALSE;
  
  if((chChar >= '0') && (chChar <= '9'))
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

  bAns = ChkDigit(chChar);

  if(bAns == TRUE)
    {
      printf("\nGIVEN CHARACTER %c IS : DIGIT\n", chChar);
    }
  else
    {
      printf("\nGIVEN CHARACTER %c IS : NOT DIGIT\n", chChar);
    }

  return 0;
}
