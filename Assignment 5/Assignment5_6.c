/* 6. Accept distance in centimetre and convert into meter.
1 meter = 100 Centimeter
Input : 87
Output : 0.87
*/

#include<stdio.h>

float ConvertCmToMtr(float);

float ConvertCmToMtr(float fNum)
{
  float fConvert = 0.0;

  fConvert = (fNum / 100);

  return fConvert;
}


int main(int argc, char *argv[])
{
  float fNum = 0.0f, fAns = 0.0;
  
  printf("\nENTER THE DISTANCE : ");
  scanf("%f", &fNum);

  fAns = ConvertCmToMtr(fNum);

  printf("\nCONVERSION OF %f Cm TO Meter is %f Meter\n", fNum, fAns);
  
  return 0;
}
