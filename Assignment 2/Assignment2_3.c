/* 3. Write a program which accept two numbers from user and display its common factors. */

#include<stdio.h>

void DisplayCommonFact(int, int);

void DisplayCommonFact(int iNum1, int iNum2)
{
  int iNum = 0, iCnt = 0;

  if(iNum1 < iNum2)
    {
      iNum = iNum1;
    }
  else
    {
      iNum = iNum2;
    }
  
  for(iCnt = 2; iCnt <= (iNum / 2); iCnt++)
    {
      if(((iNum1 % iCnt) == 0) && ((iNum2 % iCnt) == 0))
	{
	  printf("%d\t", iCnt);
	}
    }

  printf("\n");
}

int main(int argc, char* argv[])
{
  int iNum1 = 0, iNum2 = 0;
  
  printf("Enter Number 1 => ");
  scanf("%d", &iNum1);
  printf("Enter Number 2 => ");
  scanf("%d", &iNum2);

  DisplayCommonFact(iNum1, iNum2);
  
  return 0;
}
