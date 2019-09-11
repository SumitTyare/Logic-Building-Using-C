/* 4. Write a program which accept number of minutes and calculate number of hours.
Input : 320
Output : 5 hours 20 minutes
Input : 150
Output : 2 hours 30 minutes
*/

#include<stdio.h>

void CalcHours(int);

void CalcHours(int iMinutes)
{
  int iHr = 0, iMin = 0;

  iHr = iMinutes / 60;
  iMin = iMinutes - (iHr * 60);

  printf("\nCONVERSION OF %d MINUTES IS : %d HOURS %d MINUTES\n", iMinutes, iHr, iMin);
}


int main(int argc, char *argv[])
{
  int iMinutes = 0;

  printf("\nENTER THE TOTAL MINUTES : ");
  scanf("%d", &iMinutes);

  CalcHours(iMinutes);
  
  return 0;
}
