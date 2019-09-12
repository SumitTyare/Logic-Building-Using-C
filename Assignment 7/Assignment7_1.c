/* 1.Write a program which accept two numbers from user and calculate its power.
Input : 3 4
Output : 81
Input : 7 3
Output : 343
*/

#include<stdio.h>

int CalcPower(int, int);

int CalcPower(int iNo, int iPow)
{
  int iCnt = 0, iAns = 0;
  
  for(iCnt = 1, iAns = 1; iCnt <= iPow; iCnt++)
    {
      iAns = iAns * iNo;
    }

  return iAns;
}


int main(int argc, char* argv[])
{
  int iNo = 0, iPow = 0, iAns = 0;
  
  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNo);

  printf("\nENTER THE POWER OF NUMBER : ");
  scanf("%d", &iPow);

  iAns = CalcPower(iNo, iPow);

  printf("\n%d TO THE POWER %d IS : %d\n", iNo, iPow, iAns);
  
  return 0;
}
