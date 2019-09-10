/* 4. Accept length of side from user and calculate area of square.
Input :4.2
Output : 17.64
*/

#include<stdio.h>

float CalcAreaOfSquare(float);


float CalcAreaOfSquare(float fNum)
{
  float fArea = 0.0;

  fArea = fNum * fNum;

  return fArea;
}


int main(int argc, char *argv[])
{
  float fNum = 0.0f, fAns = 0.0;
  
  printf("\nENTER THE LENGTH OF SIDE : ");
  scanf("%f", &fNum);

  fAns = CalcAreaOfSquare(fNum);

  printf("\nAREA OF SQUARE is %f\n", fAns);
  
  return 0;
}
