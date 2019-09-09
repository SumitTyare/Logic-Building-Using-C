/* 8. Accept three numbers from user and count occurrence of 0. */

#include<stdio.h>

typedef unsigned int UINT;

int CalcOccurance(UINT []);

int CalcOccurance(UINT uiNo[])
{
  UINT uiTemp = 0;
  int iDigit = 0, iCnt = 0;

  for(int i = 0; i < 3; i++)
    {
      uiTemp = uiNo[i];
      while(uiTemp != 0)
	{
	  iDigit = uiTemp % 10;
	  uiTemp = uiTemp / 10;
	  if(iDigit == 0)
	    {
	      iCnt = iCnt + 1;
	    }
	}
    }
  
  return iCnt;
}

int main(int argc, char *argv[])
{
  UINT uiNumArray[3];
  int iAns = 0;

  for(int iCnt = 0; iCnt < 3; iCnt++)
    {
      printf("Enter The Number %d => ", (iCnt + 1));
      scanf("%u", &uiNumArray[iCnt]);
    }

  iAns = CalcOccurance(uiNumArray);

  printf("Occurance of Digit 0 in Numbers is %d \n", iAns);

  return 0;
}




