/* 5. Write a program which accept one number from user and on its first 4 bits. Return modified number.
Input : 34
Output : NUMBER 34 AFTER ON ITS FIRST 4 BITS IS : 47
*/

#include<stdio.h>

unsigned int ONBits(unsigned int);

unsigned int ONBits(unsigned int uiNum)
{
  int iCnt = 0;
  unsigned int uiMask = 0;

  for(iCnt = 0, uiMask = 1; iCnt < 4; iCnt++)
    {
      uiNum = (uiNum | uiMask);
      uiMask = uiMask << 1;
    }
  
  return uiNum;
}


//Using Hexadecimal Mask

/*
unsigned int ONBits(unsigned int uiNum)
{
  unsigned int uiMask = 0x0000000f;

  uiNum = (uiNum | uiMask);
  
  return uiNum;
}
*/

int main(int argc, char* argv[])
{
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  uiAns = ONBits(uiNum);

  printf("\nNUMBER %u AFTER ON ITS FIRST 4 BITS IS : %u\n", uiNum, uiAns);
  
  return 0;
}
