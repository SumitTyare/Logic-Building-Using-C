/* 3. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
Input : 11
Output : NUMBER 11 AFTER TOGGLING ITS 7th BIT IS : 75
*/

#include<stdio.h>

unsigned int ToggleBit(unsigned int);

unsigned int ToggleBit(unsigned int uiNum)
{
  unsigned int uiMask = 1;

  uiMask = uiMask << 6;

  uiNum = (uiNum ^ uiMask);
  
  return uiNum;
}


int main(int argc, char* argv[])
{
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  uiAns = ToggleBit(uiNum);

  printf("\nNUMBER %u AFTER TOGGLING ITS 7th BIT IS : %u\n", uiNum, uiAns);
  
  return 0;
}
