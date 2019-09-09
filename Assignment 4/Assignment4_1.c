/* 1.Write a program which accept one number from user and return multiplication of its digits. (If number contains 0 then ignore that 0) */

#include<stdio.h>

typedef unsigned int UINT;
typedef unsigned long int ULINT;

ULINT DigitMult(UINT);

ULINT DigitMult(UINT uiNo)
{
  UINT uiTemp = 0;
  int iDigit = 0;
  ULINT uliMult = 1;

  uiTemp = uiNo;
  while(uiTemp != 0)
    {
      iDigit = uiTemp % 10;
      uiTemp = uiTemp / 10;
      if(iDigit == 0)
	{
	  continue;
	}
      uliMult = uliMult * iDigit;
    }

  return uliMult;
}

int main(int argc, char *argv[])
{
  UINT uiNum = 0;
  ULINT uliAns = 0;
  
  printf("Enter The Number => ");
  scanf("%u", &uiNum);

  uliAns = DigitMult(uiNum);

  printf("Multiplication of Digits of %u is %lu \n", uiNum, uliAns);

  return 0;
}
