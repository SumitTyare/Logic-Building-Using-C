/* 4. Write a program which accept one number and position from user and toggle that bit. Return modified number.
Input :
ENTER NUMBER : 43
ENTER THE POSITION OF BIT YOU WANT TO TOGGLE : 3

Output : NUMBER 43 AFTER TOGGLE ITS 3th BIT IS : 47
*/

#include<stdio.h>

unsigned int ToggleBit(unsigned int, int);

unsigned int ToggleBit(unsigned int uiNum, int iPos)
{
  unsigned int uiMask = 1;

  uiMask = uiMask << (iPos - 1);

  uiNum = (uiNum ^ uiMask);
      
  return uiNum;
}


int main(int argc, char* argv[])
{
  int iPos = 0;
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  printf("\nENTER THE POSITION OF BIT YOU WANT TO TOGGLE : ");
  scanf("%d", &iPos);
  
  uiAns = ToggleBit(uiNum, iPos);

  printf("\nNUMBER %u AFTER TOGGLE ITS %dth BIT IS : %u\n", uiNum, iPos, uiAns);
  
  return 0;
}
