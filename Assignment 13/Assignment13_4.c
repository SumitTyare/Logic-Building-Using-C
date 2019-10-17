/* 4. Write a program which accept string from user and copy small characters of that string into another string. */


#include<stdio.h>
#include<stdlib.h>

void strcpySmall(char *, char *);
int SmallCount(char []);

int SmallCount(char chArr[])
{
  int iCounter = 0, iIndex = 0;

  while(chArr[iIndex] != '\0')
    {
      if((chArr[iIndex] >= 'a') && (chArr[iIndex] <= 'z'))
	{
	  iCounter++;
	}

      iIndex++;
    }

  return iCounter;
}

void strcpySmall(char *chSource, char *Dest)
{
  int iIndex = 0, iIndex1 = 0;

  while(chSource[iIndex] != '\0')
    {
      if((chSource[iIndex] >= 'a') && (chSource[iIndex] <= 'z'))
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
  int iSmall = 0;

  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  iSmall = SmallCount(chString);

  chStringCopy = (char *)malloc((iSmall * sizeof(char)) + sizeof(char));
  
  strcpySmall(chString, chStringCopy);

  printf("\nNEW COPIED STRING AFTER COPYING SMALL CHARACTERS : %s\n", chStringCopy);

  return 0;
}
