/* 8. Cost of land is 560 rupees per square feet. Accept number of square feet from user and calculate total cost.
Input : 87
Output : 48720
*/

#include<stdio.h>

#define COST 560

typedef long int LINT;

LINT CalcTotalCost(int);

LINT CalcTotalCost(int iSqFeet)
{
  LINT liCost = 0;

  liCost = iSqFeet * COST;

  return liCost;
}

int main(int argc, char *argv[])
{
  int iSqFeet = 0;
  LINT liAns = 0;
  
  printf("\nENTER SQUARE FEET : ");
  scanf("%d", &iSqFeet);

  liAns = CalcTotalCost(iSqFeet);

  printf("\nTOTAL COST IS : %ld\n", liAns);
  
  return 0;
}
