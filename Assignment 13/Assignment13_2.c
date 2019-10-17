/* 2. Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)
   Note : If third parameter is greater than the size of source string then copy whole string into destination. */

#include<stdio.h>
#include<stdlib.h>

void strncpyX(char *, char *, int);


void strncpyX(char *chSource, char *Dest, int iNum)
{
  int iIndex = 0;

  while((chSource[iIndex] != '\0') && (iIndex < iNum))
    {
      Dest[iIndex] = chSource[iIndex];
      iIndex++;
    }

  Dest[iIndex] = '\0';
}



int main(int argc, char* argv[])
{
  char chString[100], *chStringCopy = NULL;
  int iNum = 0;

  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  printf("\nHOW MANY CHARACTERS YOU WANT TO COPY IN NEW STRING : ");
  scanf("%d", &iNum);

  chStringCopy = (char *)malloc((iNum * sizeof(char)) + sizeof(char));

  strncpyX(chString, chStringCopy, iNum);

  printf("\nNEW COPIED STRING AFTER COPYING %d CHARACTERS : %s\n", iNum, chStringCopy);

  return 0;
}
