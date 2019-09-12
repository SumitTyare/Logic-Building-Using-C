/* 4. Accept number from user and check whether it is Armstrong number or not. Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits is same as the given number.
Input : 153
Output : TRUE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int CountDigits(int);
int CalcPower(int, int);
BOOL ChkArmstrong(int);

int CountDigits(int iNo)
{
  int iTemp = 0, iCnt = 0;

  iTemp = iNo;
  while(iTemp != 0)
    {
      iTemp = iTemp / 10;
      iCnt++;
    }

  return iCnt;
}


int CalcPower(int iNo, int iPow)
{
  int iCnt = 0, iAns = 0;
  
  for(iCnt = 1, iAns = 1; iCnt <= iPow; iCnt++)
    {
      iAns = iAns * iNo;
    }
  
  return iAns;
}

BOOL ChkArmstrong(int iNo)
{
  int  iTemp = 0, iDigit = 0, iPowerSum = 0, iCount = 0;
  BOOL bAns = FALSE;

  iCount = CountDigits(iNo);
  
  iTemp = iNo;
  while(iTemp != 0)
    {
      iDigit = (iTemp % 10);
      
      iPowerSum = iPowerSum + CalcPower(iDigit, iCount);

      iTemp = (iTemp / 10);
    }

  if(iPowerSum == iNo)
    {
      bAns = TRUE;
    }
  
  return bAns;
}


int main(int argc, char* argv[])
{
  int iNo = 0;
  BOOL bAns = FALSE;

  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNo);

  bAns = ChkArmstrong(iNo);

  if(bAns == TRUE)
    {
      printf("\nTHE NUMBER %d IS ARMSTRONG NUMBER\n", iNo);
    }
  else
    {
      printf("\nTHE NUMBER %d IS NOT ARMSTRONG NUMBER\n", iNo);
    }
  
  return 0;
}
