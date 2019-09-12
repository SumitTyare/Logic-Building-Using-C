/* 9. Write a program which accept range from user and display all prime numbers between that range.
Input : 5
Output : 5 20 7 11 13 17 19
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplayPrimeNums(int, int);
BOOL ChkPrime(int);

BOOL ChkPrime(int iNo)
{
  int iCnt = 0;
  BOOL bAns = TRUE;

  for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
      if((iNo % iCnt) == 0)
	{
	  bAns = FALSE;
	  break;
	}
    }

  return bAns;
}

void DisplayPrimeNums(int iStart, int iEnd)
{
  int iCnt = 0;
  BOOL bAns = FALSE;

  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
      bAns = ChkPrime(iCnt);

      if(bAns == TRUE)
	{
	  printf("%d\t", iCnt);
	}
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int iStart = 0, iEnd = 0;
  
  printf("\nENTER START : ");
  scanf("%d", &iStart);
  printf("\nENTER END : ");
  scanf("%d", &iEnd);

  DisplayPrimeNums(iStart, iEnd);
  
  return 0;
}
