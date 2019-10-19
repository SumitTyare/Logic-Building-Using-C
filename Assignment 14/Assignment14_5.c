/* 5. Write a program which accept string from user and replace each occurrence of first character of each word into capital case. */

#include<stdio.h>

void ConvertCamalCase(char []);


void ConvertCamalCase(char chString[])
{
  int iIndex = 0;

  while(chString[iIndex] != '\0')
    {
      if(iIndex == 0)
	{
	  if((chString[iIndex] >= 'a') && (chString[iIndex] <= 'z'))
	    {
	      chString[iIndex] = chString[iIndex] - 32;
	    }
	}
      if(((chString[iIndex] == ' ') || (chString[iIndex] == '\t')) && ((chString[iIndex + 1] != ' ') && (chString[iIndex + 1] != '\t')))
	{
	  iIndex++;

	  if((chString[iIndex] >= 'a') && (chString[iIndex] <= 'z'))
	    {
	      chString[iIndex] = chString[iIndex] - 32;
	    }

	}

      iIndex++;
    }
}
  


int main(int argc, char* argv[])
{
  char chString[100];
  
  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  ConvertCamalCase(chString);

  printf("\nSTRING AFTER CONVERTING IT INTO CAMAL CASE IS : %s\n", chString);
  
  return 0;
}
