/* 7. Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function). */

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL strcmpX(char *, char *);
int strlenX(char []);

int strlenX(char chArr[])
{
  int iCounter = 0, iIndex = 0;

  while(chArr[iIndex] != '\0')
    {
      iCounter++;
      iIndex++;
    }

  return iCounter;
}

BOOL strcmpX(char *chString1, char *chString2)
{
  int iLength1 = 0, iLength2 = 0, iIndex = 0;
  BOOL bAns = FALSE;

  iLength1 = strlenX(chString1);
  iLength2 = strlenX(chString2);

  if(iLength1 != iLength2)
    {
      bAns = FALSE;
    }
  else
    {
      bAns = TRUE;
      
      while(chString1[iIndex] != '\0')
	{
	  if(chString1[iIndex] != chString2[iIndex])
	    {
	      bAns = FALSE;
	      break;
	    }

	  iIndex++;
	}
    }
  
  return bAns;
}


int main(int argc, char* argv[])
{
  char chString1[100], chString2[100];
  BOOL bAns = FALSE;
  
  printf("\nENTER THE STRING 1 : ");
  scanf("%[^'\n']s", chString1);

  printf("\nENTER THE STRING 2 : ");
  scanf(" %[^'\n']s", chString2);

  bAns = strcmpX(chString1, chString2);

  if(bAns == TRUE)
    {
      printf("\nSTRING IS EQUAL\n");
    }
  else
    {
      printf("\nSTRING IS NOT EQUAL\n");
    }

  return 0;
}
