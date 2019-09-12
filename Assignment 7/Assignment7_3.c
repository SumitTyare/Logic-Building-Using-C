/* 3. Write a program which accept principle amount, time and rate of interest from user and calculate simple interest.
SimpleIntrest = PrincipleAmount * Time * RateOfIntrest / 100
*/

#include<stdio.h>

float CalcSimpInt(int, int, int);

float CalcSimpInt(int iPA, int iTime, int iRoI)
{
  float fSimpInt = 0.0;

  fSimpInt = iPA * iTime * ((float)iRoI / 100);
  
  return fSimpInt;
}

int main(int argc, char* argv[])
{
  int iPA = 0, iTime = 0, iRoI = 0;
  float fSimpInt = 0.0;

  printf("\nENTER THE PRINCIPLE AMOUNT : ");
  scanf("%d", &iPA);
  printf("\nENTER THE TIME : ");
  scanf("%d", &iTime);
  printf("\nENTER RATE OF INTEREST : ");
  scanf("%d", &iRoI);

  fSimpInt = CalcSimpInt(iPA, iTime, iRoI);

  printf("\nSIMPLE INTEREST IS : %f\n", fSimpInt);
  
  return 0;
}
