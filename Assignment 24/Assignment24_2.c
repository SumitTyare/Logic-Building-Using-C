/* 2. Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
Input : 677
Output : NUMBER 677 AFTER OFF ITS 7th & 10th BIT IS : 165
*/

#include<stdio.h>

unsigned int OFFBit(unsigned int);

unsigned int OFFBit(unsigned int uiNum)
{
  unsigned int uiMask1 = 1, uiMask2 = 1;

  uiMask1 = uiMask1 << 6;
  uiMask2 = uiMask2 << 9;

  if((uiMask1 & uiNum) == uiMask1)
    {
      uiNum = (uiNum ^ uiMask1);
    }

  if((uiMask2 & uiNum) == uiMask2)
    {
      uiNum = (uiNum ^ uiMask2);
    }
  
  return uiNum;
}


int main(int argc, char* argv[])
{
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  uiAns = OFFBit(uiNum);

  printf("\nNUMBER %u AFTER OFF ITS 7th & 10th BIT IS : %u\n", uiNum, uiAns);
  
  return 0;
}
