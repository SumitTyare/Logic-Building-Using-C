/* 5. Accept array of characters from user and replace each capital character with its corresponding small character. */

#include<stdio.h>
#include<malloc.h>

void ReplaceCapitalWithSmall(char []);

void ReplaceCapitalWithSmall(char chArr[])
{
  int iCnt = 0;

  while(chArr[iCnt] != '\0')
    {
      if((chArr[iCnt] >= 'A') && (chArr[iCnt] <= 'Z'))
	{
	  chArr[iCnt] = chArr[iCnt] + 32;
	}
      
      iCnt++;
    }  
}


int main(int argc, char* argv[])
{
  char chArr[100];
  int iCnt = 0;
  
  printf("\nENTER STRING : ");
  scanf("%[^'\n']c", chArr);
  ReplaceCapitalWithSmall(chArr);

  printf("\nSTRING AFTER REPLACING CAPITAL CHARACTER WITH ITS CORRESPONDING SMALL CHARACTER : ");

  while(chArr[iCnt] != '\0')
    {
      printf("%c", chArr[iCnt]);
      iCnt++;
    }

  printf("\n");
  
  return 0;
}
