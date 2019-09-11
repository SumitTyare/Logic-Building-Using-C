/* 1.Rent of car is 15 rupees per kilometre for first 120 kilometres and after that it is 10 rupees per kilometre. Accept total number of kilometres and calculate rent.
Input : 80
Output : 1200
Input : 145
Output : 2050
*/

#include<stdio.h>

#define TILL120 15
#define AFTER120 10
#define LIMIT 120

int CalcFare(int);

int CalcFare(int iKm)
{
  int iFare = 0, iAfter120 = 0;

  if(iKm <= LIMIT)
    {
      iFare = iKm * TILL120;
    }
  else
    {
      iAfter120 = iKm - LIMIT;
      iFare = (LIMIT * TILL120) + (iAfter120 * AFTER120);
    }

  return iFare;
  
}

int main(int argc, char *argv[])
{
  int iKm = 0, iAns = 0;

  printf("\nENTER THE KILOMETERS : ");
  scanf("%d", &iKm);

  iAns = CalcFare(iKm);

  printf("\nTOTAL FARE : %d\n", iAns);
  
  return 0;
}
