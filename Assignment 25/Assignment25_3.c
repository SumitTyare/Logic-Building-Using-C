/* 3. Write a program which accept one number and position from user and on that bit. Return modified number.
Input :
ENTER NUMBER : 11
ENTER THE POSITION OF BIT YOU WANT TO ON : 3

Output : NUMBER 11 AFTER ON ITS 3th BIT IS : 15
*/

#include<stdio.h>

unsigned int ONBit(unsigned int, int);

unsigned int ONBit(unsigned int uiNum, int iPos)
{
  unsigned int uiMask = 1;

  uiMask = uiMask << (iPos - 1);

  if((uiNum & uiMask) != uiMask)
    {
      uiNum = (uiNum ^ uiMask);
    }
      
  return uiNum;
}


int main(int argc, char* argv[])
{
  int iPos = 0;
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  printf("\nENTER THE POSITION OF BIT YOU WANT TO ON : ");
  scanf("%d", &iPos);
  
  uiAns = ONBit(uiNum, iPos);

  printf("\nNUMBER %u AFTER ON ITS %dth BIT IS : %u\n", uiNum, iPos, uiAns);
  
  return 0;
}








