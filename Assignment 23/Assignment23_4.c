/* 4. Write a program which accept one number from user and check whether its 4th and 7th bit is on or off
Input : 11
Output :

4th BIT OF NUMBER 11 IS : ON

7th BIT OF NUMBER 11 IS : OFF

*/

#include<stdio.h>

void ChkBit(unsigned int);

void ChkBit(unsigned int uiNum)
{
  int iCnt = 0;
  unsigned int uiTemp = 0, uiMask1 = 1, uiResult = 0, uiMask2 = 1;
  
  uiTemp = uiNum;

  uiMask1 = uiMask1 << 3;
  uiMask2 = uiMask2 << 6;

  if((uiMask1 & uiNum) != 0)
    {
      printf("\n4th BIT OF NUMBER %d IS : ON\n", uiNum);
    }
  else
    {
      printf("\n4th BIT OF NUMBER %d IS : OFF\n", uiNum);
    }

  if((uiMask2 & uiNum) != 0)
    {
      printf("\n7th BIT OF NUMBER %d IS : ON\n", uiNum);
    }
  else
    {
      printf("\n7th BIT OF NUMBER %d IS : OFF\n", uiNum);
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  unsigned int uiNum = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  ChkBit(uiNum);
  
  return 0;
}
