/* 4. Write a program which accept string from user and copy the contents into another string by removing all white spaces. */

#include<stdio.h>

void RemoveWhiteSpaces(char [], char []);

void RemoveWhiteSpaces(char chString1[], char chString2[])
{
  int iIndex1 = 0, iIndex2 = 0;

  while(chString1[iIndex1] != '\0')
    {
      if((chString1[iIndex1] != ' ') && (chString1[iIndex1] != '\t'))
	{
	  chString2[iIndex2] = chString1[iIndex1];
	  iIndex2++;
	  chString2[iIndex2] = '\0';
	}

      iIndex1++;
    }
}


int main(int argc, char* argv[])
{
  char chString1[100], chString2[100];
  
  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString1);

  RemoveWhiteSpaces(chString1, chString2);

  printf("\nNEW COPIED STRING AFTER REMOVING WHITE SPACES : %s\n", chString2);
  
  return 0;
}
