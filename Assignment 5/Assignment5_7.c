/* 7. Accept radius of circle from user and calculate its circumference (2*PI*R).
Input : 4.2
Output : 26.39
*/

#include<stdio.h>

#define PI 3.14

float CalcCircumferenceOfCircle(float);

float CalcCircumferenceOfCircle(float fNum)
{
  float fArea = 0.0;

  fArea = 2 * PI * fNum;

  return fArea;
}


int main(int argc, char *argv[])
{
  float fNum = 0.0f, fAns = 0.0;
  
  printf("\nENTER THE RADIUS : ");
  scanf("%f", &fNum);

  fAns = CalcCircumferenceOfCircle(fNum);

  printf("\nCIRCUMFERENCE OF CIRCLE is %f\n", fAns);
  
  return 0;
}

