/* 2. Write a program which accept one number and position from user and off that bit. Return modified number.
Input :
ENTER NUMBER : 47
ENTER THE POSITION OF BIT YOU WANT TO OFF : 3

Output : NUMBER 47 AFTER OFF ITS 3th BIT IS : 43
*/

#include<stdio.h>

unsigned int OFFBit(unsigned int, int);

unsigned int OFFBit(unsigned int uiNum, int iPos)
{
  unsigned int uiMask = 1;

  uiMask = uiMask << (iPos - 1);

  if((uiNum & uiMask) == uiMask)
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

  printf("\nENTER THE POSITION OF BIT YOU WANT TO OFF : ");
  scanf("%d", &iPos);
  
  uiAns = OFFBit(uiNum, iPos);

  printf("\nNUMBER %u AFTER OFF ITS %dth BIT IS : %u\n", uiNum, iPos, uiAns);
  
  return 0;
}
