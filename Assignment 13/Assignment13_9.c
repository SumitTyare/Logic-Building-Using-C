/* 9. Accept sing from user and reverse the contents of that string. (Implement strrev() function) */

#include<stdio.h>
#include<stdlib.h>

void strrevX(char *);

void strrevX(char *chString)
{
  int iStart = 0, iEnd = 0;
  char chTemp = '\0';
  
  while(chString[iEnd] != '\0')
    {
      iEnd++;
    }

  iEnd--;

  while(iStart < iEnd)
    {
      chTemp = chString[iStart];
      chString[iStart] = chString[iEnd];
      chString[iEnd] = chTemp;

      iStart++;
      iEnd--;
    }
}


int main(int argc, char* argv[])
{
  char chString[100];

  printf("\nENTER THE STRING : ");
  scanf("%[^'\n']s", chString);

  strrevX(chString);

  printf("\nSTRING AFTER REVERSING : %s\n", chString);
  
  return 0;
}
