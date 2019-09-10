/* 5. Accept radius of circle from user and calculate its area (PI*R*R).
Input : 4.2
Output : 55.389595
*/

#include<stdio.h>

#define PI 3.14

float CalcAreaOfCircle(float);


float CalcAreaOfCircle(float fNum)
{
  float fArea = 0.0;

  fArea = PI * fNum * fNum;

  return fArea;
}


int main(int argc, char *argv[])
{
  float fNum = 0.0f, fAns = 0.0;
  
  printf("\nENTER THE RADIUS : ");
  scanf("%f", &fNum);

  fAns = CalcAreaOfCircle(fNum);

  printf("\nAREA OF CIRCLE is %f\n", fAns);
  
  return 0;
}
