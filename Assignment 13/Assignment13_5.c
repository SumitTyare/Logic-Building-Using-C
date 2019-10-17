/* 5. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function). */

#include<stdio.h>
#include<stdlib.h>

void strcatX(char *, char *, char *);
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

void strcatX(char *chString1, char *chString2, char *chStringConcat)
{
  int iIndex1 = 0, iIndex2 = 0, iIndex3 = 0;

  while(chString1[iIndex1] != '\0')
    {
      chStringConcat[iIndex3] = chString1[iIndex1];
      iIndex1++;
      iIndex3++;
    }

  while(chString2[iIndex2] != '\0')
    {
      chStringConcat[iIndex3] = chString2[iIndex2];
      iIndex2++;
      iIndex3++;
    }

  chStringConcat[iIndex3] = '\0';
}



int main(int argc, char* argv[])
{
  char chString1[100], chString2[100], *chStringConcat = NULL;
  int iLength1 = 0, iLength2 = 0;

  printf("\nENTER THE STRING 1 : ");
  scanf("%[^'\n']s", chString1);

  printf("\nENTER THE STRING 2 : ");
  scanf(" %[^'\n']s", chString2);

  iLength1 = strlenX(chString1);
  iLength2 = strlenX(chString2);
  
  chStringConcat = (char *)malloc(((iLength1 + iLength2) * sizeof(char)) + sizeof(char));
  
  strcatX(chString1, chString2, chStringConcat);

  printf("\nNEW CONCATINATED STRING : %s\n", chStringConcat);

  return 0;
}
