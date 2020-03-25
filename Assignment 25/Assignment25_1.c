/*Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE. 
Input :
ENTER NUMBER : 47
ENTER THE POSITION OF BIT YOU WANT TO CHECK : 3
Output : 3th BIT OF NUMBER 47 IS : ON
*/

#include<stdio.h>

unsigned int ChkBit(unsigned int, int);

unsigned int ChkBit(unsigned int uiNum, int iPos)
{
  int iAns = 0;
  unsigned int uiMask = 1;

  uiMask = uiMask << (iPos - 1);

  if((uiNum & uiMask) == uiMask)
    {
      iAns = 1;
    }
  else
    {
      iAns = 0;
    }
      
  return iAns;
}


int main(int argc, char* argv[])
{
  int iPos = 0, iAns = 0;
  unsigned int uiNum = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  printf("\nENTER THE POSITION OF BIT YOU WANT TO CHECK : ");
  scanf("%d", &iPos);
  
  iAns = ChkBit(uiNum, iPos);

  if(iAns == 1)
    {
      printf("\n%dth BIT OF NUMBER %u IS : ON\n", iPos, uiNum);
    }
  else
    {
      printf("\n%dth BIT OF NUMBER %u IS : OFF\n", iPos, uiNum);
    }
  
  return 0;
}
