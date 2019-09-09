/* 2. Write a program which accept one number from user and return addition of its even digits. */

#include<stdio.h>

typedef unsigned int UINT;

int EvenDigitSum(UINT);

int EvenDigitSum(UINT uiNo)
{
  UINT uiTemp = 0;
  int iDigit = 0, iSum = 0;

  uiTemp = uiNo;
  while(uiTemp != 0)
    {
      iDigit = uiTemp % 10;
      uiTemp = uiTemp / 10;
      if((iDigit % 2) == 0)
	{
	  iSum = iSum + iDigit;
	}
    }

  return iSum;
}

int main(int argc, char *argv[])
{
  UINT uiNum = 0;
  int iAns = 0;
  
  printf("Enter The Number => ");
  scanf("%u", &uiNum);

  iAns = EvenDigitSum(uiNum);

  printf("Addition of Even Digits of %u is %d \n", uiNum, iAns);

  return 0;
}
