/* 3. Write a program which accept string from user and copy capital characters of that string into another string. */

#include<stdio.h>
#include<stdlib.h>

void strcpyCapital(char *, char *);
int CapitalCount(char []);


int CapitalCount(char chArr[])
{
  int iCounter = 0, iIndex = 0;

  while(chArr[iIndex] != '\0')
    {
      if((chArr[iIndex] >= 'A') && (chArr[iIndex] <= 'Z'))
	{
	  iCounter++;
	}

      iIndex++;
    }

  return iCounter;
}

void strcpyCapital(char *chSource, char *Dest)
{
  int iIndex = 0, iIndex1 = 0;

  while(chSource[iIndex] != '\0')
    {
      if((chSource[iIndex] >= 'A') && (chSource[iIndex] <= 'Z'))
	{
	  Dest[iIndex1] = chSource[iIndex];
	  iIndex1++;
	}

      iIndex++;
    }

  Dest[iIndex1] = '\0';
}



int main(int argc, char* argv[])
{
  char chString[100], *chStringCopy = NULL;
  int iCapital = 0;

  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  iCapital = CapitalCount(chString);

  chStringCopy = (char *)malloc((iCapital * sizeof(char)) + sizeof(char));
  
  strcpyCapital(chString, chStringCopy);

  printf("\nNEW COPIED STRING AFTER COPYING CAPITAL CHARACTERS : %s\n", chStringCopy);

  return 0;
}
