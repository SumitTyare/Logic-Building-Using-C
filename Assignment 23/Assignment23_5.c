/* 5. Write a program which accept one number from user and count number ON bits from that number.
Input : 7
Output : TOTAL ON BITS IN NUMBER 7 IS : 3
*/

#include<stdio.h>

int CountONBit(unsigned int);

int CountONBit(unsigned int uiNum)
{
  int iCnt = 0, iONBitCounter = 0;
  unsigned int uiMask = 1;

  for(iCnt = 0; iCnt < 32; iCnt++)
    {
      if((uiNum & uiMask) == uiMask)
	{
	  iONBitCounter++;
	}

      uiMask = uiMask << 1;
    }

  return iONBitCounter;
}


int main(int argc, char* argv[])
{
  int iAns = 0;
  unsigned int uiNum = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  iAns = CountONBit(uiNum);

  printf("\nTOTAL ON BITS IN NUMBER %u IS : %d\n", uiNum, iAns);
  
  return 0;
}
