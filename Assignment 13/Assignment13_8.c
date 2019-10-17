/* 8. Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function).
Note : If third parameter is greater than the size of second string
then concat whole string after first string. */

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL strcmpX(char *, char *, int);
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

BOOL strcmpX(char *chString1, char *chString2, int iNum)
{
  int iLength1 = 0, iLength2 = 0, iIndex1 = 0, iIndex2 = 0, iIndex3 = 0;
  BOOL bAns = FALSE;

  iLength1 = strlenX(chString1);
  iLength2 = strlenX(chString2);

  if(iNum > iLength2)
    {
      bAns = FALSE;

      while(chString1[iIndex1] != '\0')
	{
	  iIndex1++;
	}
      
      while(chString2[iIndex2] != '\0')
	{
	  chString1[iIndex1] = chString2[iIndex2];
	  iIndex2++;
	  iIndex1++;
	}

      chString1[iIndex1] = '\0';
    }
  else
    {
      bAns = TRUE;
      
      while(iIndex3 < iNum)
	{
	  if(chString1[iIndex3] != chString2[iIndex3])
	    {
	      bAns = FALSE;
	      break;
	    }

	  iIndex3++;
	}
    }
  
  return bAns;
}


int main(int argc, char* argv[])
{
  char chString1[100], chString2[100];
  BOOL bAns = FALSE;
  int iNum = 0;
  
  printf("\nENTER THE STRING 1 : ");
  scanf("%[^'\n']s", chString1);

  printf("\nENTER THE STRING 2 : ");
  scanf(" %[^'\n']s", chString2);

  printf("\nENTER THE NUMBER OF CHARACTERS YOU WANT TO COMPARE : ");
  scanf("%d", &iNum);

  bAns = strcmpX(chString1, chString2, iNum);

  if(bAns == TRUE)
    {
      printf("\nSTRING IS EQUAL UPTO %d NUMBER OF CHARACTERS\n", iNum);
    }
  else
    {
      printf("\nSTRING IS NOT EQUAL\n");

      printf("\nCONCATINATED STRING : %s\n", chString1);
    }

  return 0;
}
