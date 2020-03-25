/* 2. Write a program which accept one number from user and display its binary equivalent without using any % and / operation. (Use bitwise operators)
Input : 11
Output : 00000000000000000000000000001011
*/

#include<stdio.h>

void DisplayBinary(unsigned int);

void DisplayBinary(unsigned int uiNum)
{
  int iCnt = 0;
  unsigned int uiTemp = 0, uiMask = 0, uiResult = 0;
  
  uiTemp = uiNum;

  for(iCnt = 0, uiMask = 2147483648; iCnt < 32; iCnt++) //2147483648   uiMask = [1000 0000|0000 0000|0000 0000|0000 0000] Maximum unsigned integer value
    {      
      uiResult = (uiMask & uiNum);

      if(uiResult != 0)
	{
	  printf("1");
	}
      else
	{
	  printf("0");
	}

      uiMask = uiMask >> 1;
    }
  

  printf("\n");
}


int main(int argc, char* argv[])
{
  unsigned int uiNum = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  DisplayBinary(uiNum);
  
  return 0;
}
