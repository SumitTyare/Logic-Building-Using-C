/* 6. Write a program which 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function).
   Note : If third parameter is greater than the size of second string then concat whole string after first string. */

#include<stdio.h>
#include<stdlib.h>

void strncatX(char *, char *, char *, int);
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

void strncatX(char *chString1, char *chString2, char *chStringConcat, int iNum)
{
  int iIndex1 = 0, iIndex2 = 0, iIndex3 = 0;

  while(chString1[iIndex1] != '\0')
    {
      chStringConcat[iIndex3] = chString1[iIndex1];
      iIndex1++;
      iIndex3++;
    }

  while((chString2[iIndex2] != '\0') && (iIndex2 < iNum))
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
  int iLength1 = 0, iLength2 = 0, iNum = 0;

  printf("\nENTER THE STRING 1 : ");
  scanf("%[^'\n']s", chString1);

  printf("\nENTER THE STRING 2 : ");
  scanf(" %[^'\n']s", chString2);

  printf("\nHOW MANY CHARACTERS YOU WANT TO CONCAT FROM STRING 2 TO STRING 1 : ");
  scanf("%d", &iNum);  
    
  iLength1 = strlenX(chString1);
  
  chStringConcat = (char *)malloc(((iLength1 + iNum) * sizeof(char)) + sizeof(char));
  
  strncatX(chString1, chString2, chStringConcat, iNum);

  printf("\nNEW CONCATINATED STRING : %s\n", chStringConcat);

  return 0;
}
