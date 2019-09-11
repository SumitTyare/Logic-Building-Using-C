/* 10. Write a program which accept one number from user addition of factorial of each digit of that number.
Input : 324
Output : 32 (3! + 2! + 4!)
Input : 524
Output : 146 (5! + 2! + 4!)
*/

#include<stdio.h>

int DigitFactSum(int);
int CalcFactorial(int);

int CalcFactorial(int iNo)
{
  int iFact = 0, iCnt = 0;

  for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
      iFact = iFact * iCnt;
    }

  return iFact;
}


int DigitFactSum(int iNum)
{
  int iTemp = 0, iDigit = 0, iFactSum = 0;

  iTemp = iNum;
  while(iTemp != 0)
    {
      iDigit = (iTemp % 10);

      iFactSum = iFactSum +  CalcFactorial(iDigit);
      
      iTemp = iTemp / 10;
    }

  return iFactSum;
}

int main(int argc, char *argv[])
{
  int iNum = 0, iFactSum = 0;

  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNum);

  iFactSum = DigitFactSum(iNum);

  printf("\nSUM OF FACTORIALS OF DIGIT OF NUMBER %d IS : %d\n", iNum, iFactSum);
  
  return 0;
}
