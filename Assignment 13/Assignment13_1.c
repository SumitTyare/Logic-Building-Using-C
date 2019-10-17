/* 1.Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function) */

#include<stdio.h>
#include<malloc.h>

void strcpyX(char *, char *);
int strlenX(char *);

int strlenX(char *chString)
{
  int iCounter = 0, iCnt = 0;

  while(chString[iCnt] != '\0')
    {
      iCounter++;
      iCnt++;
    }

  return iCounter;
}


void strcpyX(char *chString, char *chStringCopy)
{
  int iCnt = 0;

  while(chString[iCnt] != '\0')
    {
      chStringCopy[iCnt] = chString[iCnt];
      iCnt++;
    }

  chStringCopy[iCnt] = '\0';
}


int main(int argc, char* argv[])
{
  int iStringLen = 0;
  char chString[100], *chStringCopy = NULL;

  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  iStringLen = strlenX(chString);

  chStringCopy = (char *)malloc((iStringLen * sizeof(char)) + sizeof(char));
  
  strcpyX(chString, chStringCopy);

  printf("\nSTRING AFTER COPIED FROM ANOTHER STRING : %s\n", chStringCopy);

  return 0;
}
