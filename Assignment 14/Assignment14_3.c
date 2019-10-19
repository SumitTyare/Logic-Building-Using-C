/* 3. Write a program which accept string from user and reverse each word in place. */

#include<stdio.h>

void WordReverse(char []);
void strrevX(char [], int, int);


void strrevX(char chSubString[], int iStart, int iEnd)
{
  char chTemp = '\0';
  
  while(iStart < iEnd)
    {
      chTemp = chSubString[iStart];
      chSubString[iStart] = chSubString[iEnd];
      chSubString[iEnd] = chTemp;

      iStart++;
      iEnd--;
    }
}

void WordReverse(char chString[])
{
  int iIndex = 0, iStart = 0, iEnd = 0;
  
  while(chString[iIndex] != '\0')
    {
      if((chString[iIndex] == ' ') || (chString[iIndex] == '\t'))
	{
	  iEnd = iIndex - 1;
	  strrevX(chString, iStart, iEnd);
	  iStart = iIndex + 1;
	}
      else if(chString[iIndex + 1] == '\0')
	{
	  iEnd = iIndex;
	  strrevX(chString, iStart, iEnd);
	  break;
	}

      iIndex++;
    }
}


int main(int argc, char* argv[])
{
  char chString[100];
  
  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  WordReverse(chString);

  printf("\nSTRING AFTER REVERSING EACH WORD IN PLACE IS : %s\n", chString);
  
  return 0;
}
