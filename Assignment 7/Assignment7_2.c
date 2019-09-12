/* 2. Write a program which accept number from user and check whether that number is strong number or not. When the sum of the factorial of a number's individual digits are equal to the number itself, then that number is called a strong number.
Input : 145
Output : TRUE
since 1! + 4! + 5! = 1 + 24 + 120 = 145
*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkStrongNum(int);
int CalcFactorial(int);


int CalcFactorial(int iNo)
{
  int iCnt = 0, iFact = 0;

  for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
      iFact = iFact * iCnt;
    }
  
  return iFact;
}

BOOL ChkStrongNum(int iNo)
{
  int iTemp = 0, iDigit = 0, iFactSum = 0;
  BOOL bAns = FALSE;
  
  iTemp = iNo;
  while(iTemp != 0)
    {
      iDigit = (iTemp % 10);

      iFactSum = iFactSum + CalcFactorial(iDigit);

      iTemp = (iTemp / 10);
    }

  if(iFactSum == iNo)
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

  bAns = ChkStrongNum(iNo);

  if(bAns == TRUE)
    {
      printf("\nTHE NUMBER %d IS STRONG NUMBER\n", iNo);
    }
  else
    {
      printf("\nTHE NUMBER %d IS NOT STRONG NUMBER\n", iNo);
    }
  
  return 0;
}
