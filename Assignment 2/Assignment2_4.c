/* 4. Write a program which accept two numbers from user and display its largest common factors. */

#include<stdio.h>

int LargestCommonFact(int, int);

int LargestCommonFact(int iNum1, int iNum2)
{
  int iNum = 0, iCnt = 0, iFact = 1;

  if(iNum1 < iNum2)
    {
      iNum = iNum1;
    }
  else
    {
      iNum = iNum2;
    }
  
  for(iCnt = (iNum / 2); iCnt >= 2; iCnt--)
    {
      if(((iNum1 % iCnt) == 0) && ((iNum2 % iCnt) == 0))
	{
	  iFact = iCnt;
	  break;
	}
    }

  return iFact;
}

int main(int argc, char* argv[])
{
  int iNum1 = 0, iNum2 = 0, iAns = 0;
  
  printf("Enter Number 1 => ");
  scanf("%d", &iNum1);
  printf("Enter Number 2 => ");
  scanf("%d", &iNum2);

  iAns = LargestCommonFact(iNum1, iNum2);

  printf("Largest Common Factor of %d & %d is %d\n", iNum1, iNum2, iAns);
  
  return 0;
}
