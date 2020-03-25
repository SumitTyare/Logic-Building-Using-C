/* 1.Write a program which accept one number from user and off 7th bit of that number. Return modified number.
Input : 65
Output : NUMBER 65 AFTER OFF ITS 7th BIT IS : 1
*/

#include<stdio.h>

unsigned int OFFBit(unsigned int);

unsigned int OFFBit(unsigned int uiNum)
{
  unsigned int uiMask = 1;

  uiMask = uiMask << 6;

  if((uiMask & uiNum) == uiMask)
    {
      uiNum = (uiNum ^ uiMask);
    }
  
  return uiNum;
}


int main(int argc, char* argv[])
{
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  uiAns = OFFBit(uiNum);

  printf("\nNUMBER %u AFTER OFF ITS 7th BIT IS : %u\n", uiNum, uiAns);
  
  return 0;
}
