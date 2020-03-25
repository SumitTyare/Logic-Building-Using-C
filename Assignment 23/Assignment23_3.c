/* 3. Write a program which accept one number from user and check whether its 4th bit is on or off
Input : 11
Output : 4th BIT OF NUMBER 11 IS : ON
*/

#include<stdio.h>

unsigned int ChkBit(unsigned int);

unsigned int ChkBit(unsigned int uiNum)
{
  unsigned int uiAns = 0, uiMask = 1;

  uiMask = uiMask << 3;

  if((uiMask & uiNum) != 0)
    {
      uiAns = 1;
    }
  else
    {
      uiAns = 0;
    }

  return uiAns;
}

int main(int argc, char* argv[])
{
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  uiAns = ChkBit(uiNum);

  if(uiAns == 1)
    {
      printf("\n4th BIT OF NUMBER %d IS : ON\n", uiNum);
    }
  else
    {
      printf("\n4th BIT OF NUMBER %d IS : OFF\n", uiNum);
    }
  
  return 0;
}
