/* 10. Write a program which accept one number from user and return difference between addition of its even digits and addition of odd digits. */

#include<stdio.h>

typedef unsigned int UINT;

int DiffEvenAndOddSum(UINT);

int DiffEvenAndOddSum(UINT uiNo)
{
  UINT uiTemp = 0;
  int iDigit = 0, iEvenSum = 0, iOddSum = 0;

  uiTemp = uiNo;
  while(uiTemp != 0)
    {
      iDigit = uiTemp % 10;
      uiTemp = uiTemp / 10;
      if((iDigit % 2) == 0)
	{
	  iEvenSum = iEvenSum + iDigit;
	}
      else
	{
	  iOddSum = iOddSum + iDigit;
	}
    }

  return (iEvenSum - iOddSum);
}

int main(int argc, char *argv[])
{
  UINT uiNum = 0;
  int iAns = 0;
  
  printf("Enter The Number => ");
  scanf("%u", &uiNum);

  iAns = DiffEvenAndOddSum(uiNum);

  printf("Difference Between Addition of Even Digits & Addition of Odd Digits is %d \n", iAns);

  return 0;
}
