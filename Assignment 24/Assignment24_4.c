/* 4. Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.
Input : 587
Output : NUMBER 587 AFTER TOGGLING ITS 7th & 10th BIT IS : 11
*/

#include<stdio.h>

unsigned int ToggleBit(unsigned int);

unsigned int ToggleBit(unsigned int uiNum)
{
  unsigned int uiMask1 = 1, uiMask2 = 1;

  uiMask1 = uiMask1 << 6;
  uiMask2 = uiMask2 << 9;

  uiNum = (uiNum ^ uiMask1);

  uiNum = (uiNum ^ uiMask2);
  
  return uiNum;
}


int main(int argc, char* argv[])
{
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  uiAns = ToggleBit(uiNum);

  printf("\nNUMBER %u AFTER TOGGLING ITS 7th & 10th BIT IS : %u\n", uiNum, uiAns);
  
  return 0;
}
