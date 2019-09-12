/* 5. Accept one numbers from user and display frequency of each digit.
Input : 543457
Output : 3 -> 1
4 -> 2
5 -> 2
7 -> 1
*/

#include<stdio.h>

void ChkDigitFreq(int);

void ChkDigitFreq(int iNo)
{
  int iTemp = 0, iCnt = 0;
  int iArr[10] = {0};
  
  iTemp = iNo;
  while(iTemp != 0)
    {
      iArr[(iTemp % 10)]++;

      iTemp = iTemp / 10;
    }

  for(iCnt = 0; iCnt <= 9; iCnt++)
    {
      if(iArr[iCnt] != 0)
	{
	  printf("\n%d OCCURS %d TIMES\n", iCnt, iArr[iCnt]);
	}
    }
}

int main(int argc, char* argv[])
{
  int iNo = 0;

  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNo);

  ChkDigitFreq(iNo);
  
  return 0;
}
