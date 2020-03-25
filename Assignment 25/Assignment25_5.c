/* 5. Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number.
Input : 15
Output : NUMBER 15 AFTER TOGGLING ITS 1st & 8th NIBBLE IS : 4026531840
*/

#include<stdio.h>

unsigned int ToggleBit(unsigned int);

unsigned int ToggleBit(unsigned int uiNum)
{
  unsigned int uiMask = 0;

  uiMask = 15; // Binary Value of 15 is [0000 0000|0000 0000|0000 0000|0000 1111]

  uiNum = (uiNum ^ uiMask);
  
  uiMask = uiMask << 28; // After Left Shift by 28 Mask Value is [1111 0000|0000 0000|0000 0000|0000 0000]

  uiNum = (uiNum ^ uiMask);
      
  return uiNum;
}


//Using Hexadecimal Values

 /*
unsigned int ToggleBit(unsigned int uiNum)
{
  unsigned int uiMask = 0xf000000f; // Binary Value of Mask is [1111 0000|0000 0000|0000 0000|0000 1111]

  uiNum = (uiNum ^ uiMask);
      
  return uiNum;
}
*/

int main(int argc, char* argv[])
{
  unsigned int uiNum = 0, uiAns = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  uiAns = ToggleBit(uiNum);

  printf("\nNUMBER %u AFTER TOGGLING ITS 1st & 8th NIBBLE IS : %u\n", uiNum, uiAns);
  
  return 0;
}
