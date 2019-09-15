/* 5. Write a program which accept 8 numbers from user and print prime numbers from them. */

#include<stdio.h>
#include<malloc.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkPrime(int);
void DisplayPrime(int *, int);


BOOL ChkPrime(int iNum)
{
  int iCnt = 0;
  BOOL bAns = FALSE;

  for(iCnt = 2, bAns = TRUE; iCnt <= (iNum / 2); iCnt++)
    {
      if((iNum % iCnt) == 0)
	{
	  bAns = FALSE;
	  break;
	}
    }
  
  return bAns;
}


void DisplayPrime(int *iArr, int iNo)
{
  int iCnt = 0;
  int *iTemp = NULL;
  BOOL bAns = FALSE;

  printf("\nDISPLAYING PRIME NUMBERS FROM GIVEN ARRAY :\n");
  
  for(iCnt = 0, iTemp = iArr; iCnt < iNo; iCnt++, iTemp++)
    {
      bAns = ChkPrime(*iTemp);

      if(bAns == TRUE)
	{
	  printf("%d\t", *iTemp);
	}
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int iNo = 0, iCnt = 0;
  int *iArr = NULL;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iNo);

  iArr = (int *)malloc(iNo * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("\nENTER ELEMENT %d : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  DisplayPrime(iArr, iNo);
  
  return 0;
}
