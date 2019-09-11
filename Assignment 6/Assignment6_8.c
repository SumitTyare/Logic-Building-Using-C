/* 8. Accept three numbers from user and return difference between
largest and smallest digit.
Input : 543
Output : 2 (5 - 3)
Input : 7309
Output : 7 (9 - 3)
Input : 7319
Output : 8 (9 - 1)
*/


#include<stdio.h>

int DiffDigit(int);

int DiffDigit(int iNum)
{
  int iTemp = 0, iDigit = 0, iSmall = 0, iBig = 0, iDiff = 0;

  iTemp = iNum;
  iSmall = iNum;
  while(iTemp != 0)
    {
      iDigit = (iTemp % 10);
      if(iDigit < iSmall)
	{
	  iSmall = iDigit;
	}
      if(iDigit > iBig)
	{
	  iBig = iDigit;
	}

      iTemp = iTemp / 10;
    }

  iDiff = iBig - iSmall;

  return iDiff;
}

int main(int argc, char *argv[])
{
  int iNum = 0, iCnt = 0, iDiff = 0;

  for(iCnt = 1; iCnt <= 3; iCnt++)
    {
      printf("\nENTER THE NUMBER %d : ", iCnt);
      scanf("%d", &iNum);

      iDiff = DiffDigit(iNum);

      printf("\nDIFFERENCE BETWEEN SMALLEST & LARGETS DIGIT OF NUMBER %d IS : %d\n", iNum, iDiff);
    }
  
  return 0;
}
