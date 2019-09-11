/* 3. Write a program which accept number of hours and calculate number of minutes.
Input : 5
Output : 300
*/

#include<stdio.h>

int CalcMinutes(int);

int CalcMinutes(int iHr)
{
  int iMinutes = 0;

  iMinutes = iHr * 60;
    
  return iMinutes;
  
}

int main(int argc, char *argv[])
{
  int iHr = 0, iAns = 0;

  printf("\nENTER THE TOTAL HOURS : ");
  scanf("%d", &iHr);

  iAns = CalcMinutes(iHr);

  printf("\nCONVERSION OF %d HOURS TO MINUTES IS : %d MIN\n", iHr, iAns);
  
  return 0;
}
