/* 10. Accept string from user and check whether the string is palindrome or not without considering its case. */

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrPalindromeCaseInsensitive(char *);

BOOL StrPalindromeCaseInsensitive(char *chString)
{
  int iStart = 0, iEnd = 0;
  BOOL bAns = FALSE;
  
  while(chString[iEnd] != '\0')
    {
      iEnd++;
    }

  iEnd--;

  
  while(iStart < iEnd)
    {
      bAns = TRUE;
      
      if((chString[iStart] != chString[iEnd]) && (chString[iStart] != (chString[iEnd] + 32)) && (chString[iStart] != (chString[iEnd] - 32)))
	{
	  bAns = FALSE;
	  break;
	}
      
      iStart++;
      iEnd--;
    }

  return bAns;
}


int main(int argc, char* argv[])
{
  char chString[100];
  BOOL bAns = FALSE;

  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  bAns = StrPalindromeCaseInsensitive(chString);

  if(bAns == TRUE)
    {
      printf("\nSTRING IS PALINDROME\n");
    }
  else
    {
      printf("\nSTRING IS NOT PALINDROME\n");
    }
  
  return 0;
}
