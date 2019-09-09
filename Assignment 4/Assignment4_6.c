/* 6. Accept one numbers from user and count occurrence of 0. */

#include<stdio.h>

typedef unsigned int UINT;

int CalcOccurance(UINT);

int CalcOccurance(UINT uiNo)
{
  UINT uiTemp = 0;
  int iDigit = 0, iCnt = 0;

  uiTemp = uiNo;
  while(uiTemp != 0)
    {
      iDigit = uiTemp % 10;
      uiTemp = uiTemp / 10;
      if(iDigit == 0)
	{
	  iCnt = iCnt + 1;
	}
    }

  return iCnt;
}

int main(int argc, char *argv[])
{
  UINT uiNum = 0;
  int iAns = 0;
  
  printf("Enter The Number => ");
  scanf("%u", &uiNum);

  iAns = CalcOccurance(uiNum);

  printf("Occurance of Digit 0 in Number %u is %d \n", uiNum, iAns);

  return 0;
}
