/* 2. Write a program which accept string from user and return length of largest word. */

#include<stdio.h>

int MaxLengthWord(char *);


int MaxLengthWord(char *chString)
{
  int iMaxWord = 0, iIndex = 0, iStart = 0, iEnd = 0, iLength = 0;

  iStart = 0;
  iEnd = 0;
  while(chString[iIndex] != '\0')
    {
      if((chString[iIndex] == ' '))
	{
	  iEnd = iIndex;
	  iLength = iEnd - iStart;

	  iStart = iIndex + 1;
	}
      else if((chString[iIndex + 1] == '\0'))
	{
	  iEnd = iIndex + 1;
	  iLength = iEnd - iStart;

	  if(iLength > iMaxWord)
	    {
	      iMaxWord = iLength;
	    }

	  break;
	}

      

      if(iLength > iMaxWord)
	{
	  iMaxWord = iLength;
	}

      iIndex++;
    }

  return iMaxWord;
}

int main(int argc, char* argv[])
{
  int iMaxWord = 0;
  char chString[100];
  
  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  iMaxWord = MaxLengthWord(chString);

  printf("\nMAXIMUM LENGTH OF WORD IN GIVEN STRING IS : %d\n", iMaxWord);
  
  return 0;
}
