/* 1.Write a program which accept one number from user and display its binary equivalent.
Input : 11
Output : 1011
*/

#include<stdio.h>

void DisplayBinary(unsigned int);

void DisplayBinary(unsigned int uiNum)
{
  unsigned int uiTemp = 0;
  
  uiTemp = uiNum;

  if(uiTemp == 0)
    {
      printf("\nBINARY EQUIVALENT OF NUMBER IS : ");
      return;
    }
  else
    {
      DisplayBinary(uiTemp / 2);
      
      printf("%d", (uiTemp % 2));
    }
}


int main(int argc, char* argv[])
{
  unsigned int uiNum = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%u", &uiNum);

  DisplayBinary(uiNum);
  printf("\n");
  
  return 0;
}
