/* 1.Write a program which accept string from user count number of words from string */

#include<stdio.h>

int WordCount(char []);


int WordCount(char chString[])
{

  int iIndex = 0, iWordCount = 0;
  
  while(chString[iIndex] != '\0')
    {
      if(iIndex == 0)
	{
	  if((chString[iIndex] != ' ') && (chString[iIndex] != '\t'))
	    {
	      iWordCount++;
	    }
	}
      else if(((chString[iIndex] == ' ') || (chString[iIndex] == '\t')) && (((chString[iIndex + 1] >= 'A') && (chString[iIndex + 1] <= 'Z' )) || ((chString[iIndex + 1] >= 'a') && (chString[iIndex + 1] <= 'z' ))))
	{
	  iWordCount++;
	}

      iIndex++;
    }

  return iWordCount;   
}


int main(int argc, char* argv[])
{
  int iWordCount = 0;
  char chString[100];
  
  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  iWordCount = WordCount(chString);

  printf("\nTOTAL WORDS IN GIVEN STRING IS : %d\n", iWordCount);
  
  return 0;
}
