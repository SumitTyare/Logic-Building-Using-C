/* 3. Accept array of characters from user and count number of capital characters. */

#include<stdio.h>
#include<malloc.h>

int CountCapitalLetters(char []);

int CountCapitalLetters(char chArr[])
{
  int iCnt = 0, iCapCount = 0;

  while(chArr[iCnt] != '\0')
    {
      if((chArr[iCnt] >= 'A') && (chArr[iCnt] <= 'Z'))
	{
	  iCapCount++;
	}
      
      iCnt++;
    }

  return iCapCount;
}


int main(int argc, char* argv[])
{
  char chArr[100];
  int iCapCount = 0;
  
  printf("\nENTER STRING : ");
  scanf("%[^'\n']c", chArr);
  iCapCount = CountCapitalLetters(chArr);

  printf("\nTOTAL CAPITAL LETTERS IN GIVEN STRING IS : %d\n", iCapCount);

  return 0;
}
