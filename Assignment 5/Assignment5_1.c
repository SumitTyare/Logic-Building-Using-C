/* 1.Write a program which accept one number from user and return smallest digit.
Input : 712
Output : 1
Input : 7520
Output : 0 */

#include<stdio.h>

int SmallestDigit(int);

int SmallestDigit(int iNum)
{
  int iTemp = 0, iDigit = 0, iMin = 0;
  
  iTemp = iNum;
  iMin = 9;
  while(iTemp != 0)
    {
      iDigit = (iTemp % 10);

      if(iDigit < iMin)
	{
	  iMin = iDigit;
	}
      
      iTemp = (iTemp / 10);
    }

  return iMin;
}

int main(int argc, char *argv[])
{
  int iNum = 0, iAns = 0;
  
  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNum);

  iAns = SmallestDigit(iNum);

  printf("\nSMALLEST DIGIT IN NUMBER %d is %d\n", iNum, iAns);
  
  return 0;
}
