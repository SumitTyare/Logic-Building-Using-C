/* 2. Parking charges for four whaler is 30 rupees for first three hours and after every hour it is 5 rupees. Accept number of hours and calculate total amount.
Input : 2
Output : 30
Input : 7
Output : 50
*/

#include<stdio.h>

#define TILL3 30
#define AFTER3 5
#define LIMIT 3

int CalcFare(int);

int CalcFare(int iHr)
{
  int iFare = 0, iAfter3 = 0;

  if((iHr >= 1) && (iHr <= LIMIT))
    {
      iFare = TILL3;
    }
  else if(iHr > LIMIT)
    {
      iAfter3 = iHr - LIMIT;
      iFare = TILL3 + (iAfter3 * AFTER3);
    }

  return iFare;
  
}

int main(int argc, char *argv[])
{
  int iHr = 0, iAns = 0;

  printf("\nENTER THE TOTAL HOURS : ");
  scanf("%d", &iHr);

  iAns = CalcFare(iHr);

  printf("\nTOTAL FARE : %d\n", iAns);
  
  return 0;
}
