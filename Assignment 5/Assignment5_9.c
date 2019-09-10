/* 9. Accept length and width of rectangle and calculate its area (Length * Width).
Input : 4.2    8.9
Output : 37.38
*/


#include<stdio.h>

float CalcAreaOfRectangle(float, float);

float CalcAreaOfRectangle(float fLength, float fWidth)
{
  float fArea = 0.0;

  fArea = fLength * fWidth;

  return fArea;
}


int main(int argc, char *argv[])
{
  float fLength = 0.0f, fWidth = 0.0f, fAns = 0.0f;
  
  printf("\nENTER THE LENGHT : ");
  scanf("%f", &fLength);
  printf("\nENTER THE WIDTH : ");
  scanf("%f", &fWidth);

  fAns = CalcAreaOfRectangle(fLength, fWidth);

  printf("\nCIRCUMFERENCE OF CIRCLE is %f\n", fAns);
  
  return 0;
}
